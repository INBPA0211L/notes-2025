
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char flight_number[11];
    char destination[31];
    double flight_duration;
    int passenger_count;
} FLIGHT;

int cmp(const void *a, const void *b)
{
    FLIGHT *left = (FLIGHT *)a;
    FLIGHT *right = (FLIGHT *)b;

    if (left->flight_duration - right->flight_duration)
    {
        return -(left->flight_duration - right->flight_duration);
    }
    if (strcmp(left->destination, right->destination))
    {
        return (strcmp(left->destination, right->destination));
    }
    if (left->passenger_count - right->passenger_count)
    {
        return -(left->passenger_count - right->passenger_count);
    }
    return strcmp(left->flight_number, right->flight_number);
}

int main(int argc, char *argv[])
{
    FLIGHT data[300];
    char line[57];

    if (argc < 2)
    {
        fprintf(stderr, "No 1st argument\n");
        return 2;
    }
    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "%s cannot be opened\n", argv[1]);
        return 3;
    }

    int length = 0;
    while (1)
    {
        fgets(line, sizeof(line), file);
        line[strlen(line) - 1] = '\0';

        if(strcmp(line, "END") == 0) {
            break;
        }
        
        strcpy(data[length].flight_number, strtok(line, ";"));
        strcpy(data[length].destination, strtok(NULL, ";"));
        data[length].flight_duration = atof(strtok(NULL, ";"));
        data[length].passenger_count = atoi(strtok(NULL, ";"));
        length++;
    }
    fclose(file);

    qsort(data, length, sizeof(FLIGHT), cmp);

    if (argc < 3)
    {
        fprintf(stderr, "No 2nd argument\n");
        return 9;
    }
    file = fopen(argv[2], "w");
    if (!file)
    {
        fprintf(stderr, "%s cannot be opened\n", argv[2]);
        return 6;
    }

    for (int i = 0; i < length; i++)
    {
        fprintf(file, "%s;%s;%.2lf;%d\n", data[i].flight_number, data[i].destination, data[i].flight_duration, data[i].passenger_count);
    }
    fprintf(file, "END\n");
    fclose(file);

    return EXIT_SUCCESS;
}
