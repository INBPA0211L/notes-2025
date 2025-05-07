
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char flight_number[11];
    double flight_duration;
    char destination[31];
    int passenger_count;
} FLIGHT;

int cmp(const void *a, const void *b)
{
    FLIGHT *left = (FLIGHT *)a;
    FLIGHT *right = (FLIGHT *)b;

    if (left->passenger_count != right->passenger_count)
    {
        return -(left->passenger_count - right->passenger_count);
    }
    if (strcmp(left->destination, right->destination))
    {
        return strcmp(left->destination, right->destination);
    }
    if (left->flight_duration != right->flight_duration)
    {
        return left->flight_duration > right->flight_duration ? -1 : 1;
    }
    return strcmp(left->flight_number, right->flight_number);
}

int main(int argc, char *argv[])
{
    char line[57];

    if (argc < 2)
    {
        fprintf(stderr, "No 1st argument\n");
        return 7;
    }
    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "%s cannot be opened\n", argv[1]);
        return 8;
    }

    int length = atoi(fgets(line, sizeof(line), file));
    FLIGHT flights[length];
    for (int i = 0; i < length; i++)
    {
        fgets(line, sizeof(line), file);
        line[strlen(line) - 1] = '\0';
        strcpy(flights[i].flight_number, strtok(line, ";"));
        flights[i].flight_duration = atof(strtok(NULL, ";"));
        strcpy(flights[i].destination, strtok(NULL, ";"));
        flights[i].passenger_count = atoi(strtok(NULL, ";"));
    }
    fclose(file);

    qsort(flights, length, sizeof(FLIGHT), cmp);

    if (argc < 3)
    {
        fprintf(stderr, "No 2nd argument\n");
        return 9;
    }
    file = fopen(argv[2], "w");
    if (!file)
    {
        fprintf(stderr, "%s cannot be opened\n", argv[2]);
        return 5;
    }

    fprintf(file, "%d\n", length);
    for (int i = 0; i < length; i++)
    {
        fprintf(file, "%s;%.2lf;%s;%d\n", flights[i].flight_number, flights[i].flight_duration, flights[i].destination, flights[i].passenger_count);
    }
    fclose(file);

    return EXIT_SUCCESS;
}
