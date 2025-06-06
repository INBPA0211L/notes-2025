[↑ Back](./README.md)

# `P110201` Flights - Explanation

## Step #1: Defining record

First, you must define the type that represents a record of the CSV file.

### Instruction

Define the record `FLIGHT` based on a structure having the following fields:

1. `flight_number`: the unique identifier for the flight (a string having at most `10` characters, type: `char[]`)
1. `flight_duration`: the duration of the flight in hours (a floating-point number from the range `[0.00,24.99]`, having `2` precision digits, type: `double`)
1. `destination`: the destination airport of the flight (a string having at most `30` characters, type: `char[]`)
1. `passenger_count`: the number of passengers on the flight (an integer number from the range `[1,9999999]`, type: `int`)

### Solution

```c
typedef struct
{
    char flight_number[11];
    double flight_duration;
    char destination[31];
    int passenger_count;
} FLIGHT;
```

### Comments

1. It is **recommended** to declare the fields in the same order as the sheet specifies them.
1. It is **recommended** to have a standalone declaration for each field.
1. It is **mandatory** to declare the integer number fields using the `int` type.
1. It is **mandatory** to declare the floating-point number fields using the `float` type.
1. It is **mandatory** to declare the string fields using a `char` array type.
1. It is **mandatory** to declare the character arrays having the suitable length (the given limit plus one).
1. It is **mandatory** to define a new type using the `typedef` keyword.

## Step #2a: Reading records from file (version *reading `n` records*)

### Instruction

Open and read the CSV file whose name (path) is passed as the first command-line argument. Each line represents a single record in the following format:

```
<flight_number>;<flight_duration>;<destination>;<passenger_count>
```

The following notes are applied:

1. Implement the solution in function `main()`.
1. The input uses the `';'` (semicolon) character as the delimiter.
1. Each line contains at most `55` characters.
1. The end of the input is denoted with a line containing the character sequence `"END"`. It is guaranteed that the input contains at most `180` records.
1. Print an error message and exit with status code `7` if the command-line argument is not present.
1. Print an error message and exit with status code `8` if the file cannot be opened.
1. The `flight_duration` field of each flight has `2` precision digits in its representation.
1. You can expect only valid values for all the fields.
1. Each line is terminated with a newline character.

#### Sample input

```
10
FL123;3.25;New York;150
AB987;5.50;London;200
XY456;3.25;Tokyo;150
CD789;7.75;Paris;300
EF321;5.50;New York;450
GH654;7.75;London;200
IJ987;3.25;Paris;150
KL432;5.50;Tokyo;450
MN876;7.75;New York;300
OP543;3.25;London;9999999
```

### Solution

```c
// ...

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

   // ...
}
```

### Comments

Changes applied to last week's guidelines (considering the use of function `fgets()`):

1. It is **mandatory** to check whether the user passes the first command-line argument, print a custom error message, and return the given error code.
1. It is **mandatory** to open the file.
1. It is **mandatory** to declare the `line` character array having the suitable length (the given limit plus two).
1. It is **mandatory** to remove the last, `\n` element of the `line` character array.
1. It is **mandatory** to use function `fgets()` instead of function `gets()`.
1. It is **mandatory** to close the file.

> [!WARNING]
>
> Double-check whether the last line is followed by the `\n` character. You `fgets()` invocation will not work properly without it.

## Step #2b: Reading records from file (version *reading until `EOF`*)

### Instruction

Open and read the CSV file whose name (path) is passed as the first command-line argument. Each line represents a single record in the following format:

```
<flight_number>;<flight_duration>;<destination>;<passenger_count>
```

The following notes are applied:

1. Implement the solution in function `main()`.
1. The input uses the `';'` (semicolon) character as the delimiter.
1. Each line contains at most `55` characters.
1. The end of the input is denoted with `EOF`. It is guaranteed that the input contains at most `180` records.
1. Print an error message and exit with status code `7` if the command-line argument is not present.
1. Print an error message and exit with status code `8` if the file cannot be opened.
1. The `flight_duration` field of each flight has `2` precision digits in its representation.
1. You can expect only valid values for all the fields.
1. Each line is terminated with a newline character.

#### Sample input

```
FL123;3.25;New York;150
AB987;5.50;London;200
XY456;3.25;Tokyo;150
CD789;7.75;Paris;300
EF321;5.50;New York;450
GH654;7.75;London;200
IJ987;3.25;Paris;150
KL432;5.50;Tokyo;450
MN876;7.75;New York;300
OP543;3.25;London;9999999
```

### Solution

```c
// ...

int main(int argc, char *argv[])
{
    FLIGHT flights[180];
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

    int length = 0;
    while (fgets(line, sizeof(line), file))
    {
        line[strlen(line) - 1] = '\0';
        strcpy(flights[length].flight_number, strtok(line, ";"));
        flights[length].flight_duration = atof(strtok(NULL, ";"));
        strcpy(flights[length].destination, strtok(NULL, ";"));
        flights[length].passenger_count = atoi(strtok(NULL, ";"));
        length++;
    }
    fclose(file);

    // ...
}
```

### Comments

Changes applied to last week's guidelines (considering the use of function `fgets()`):

1. It is **mandatory** to check whether the user passes the first command-line argument, print a custom error message, and return the given error code.
1. It is **mandatory** to open the file.
1. It is **mandatory** to declare the `line` character array having the suitable length (the given limit plus two).
1. It is **mandatory** to remove the last, `\n` element of the `line` character array.
1. It is **mandatory** to use function `fgets()` instead of function `gets()`.
1. It is **mandatory** to close the file.

> [!WARNING]
>
> Double-check whether the last line is followed by the `\n` character. You `fgets()` invocation will not work properly without it.

## Step #2c: Reading records from file (version *reading until terminating value*)

### Instruction

Open and read the CSV file whose name (path) is passed as the first command-line argument. Each line represents a single record in the following format:

```
<flight_number>;<flight_duration>;<destination>;<passenger_count>
```

The following notes are applied:

1. Implement the solution in function `main()`.
1. The input uses the `';'` (semicolon) character as the delimiter.
1. Each line contains at most `55` characters.
1. The end of the input is denoted with a line containing the character sequence `"END"`. It is guaranteed that the input contains at most `180` records.
1. Print an error message and exit with status code `7` if the command-line argument is not present.
1. Print an error message and exit with status code `8` if the file cannot be opened.
1. The `flight_duration` field of each flight has `2` precision digits in its representation.
1. You can expect only valid values for all the fields.
1. Each line is terminated with a newline character.

#### Sample input

```
FL123;3.25;New York;150
AB987;5.50;London;200
XY456;3.25;Tokyo;150
CD789;7.75;Paris;300
EF321;5.50;New York;450
GH654;7.75;London;200
IJ987;3.25;Paris;150
KL432;5.50;Tokyo;450
MN876;7.75;New York;300
OP543;3.25;London;9999999
END
```

### Solution

```c
// ...

int main(int argc, char *argv[])
{
    FLIGHT flights[180];
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

    int length = 0;
    while (1)
    {
        fgets(line, sizeof(line), file);
        line[strlen(line) - 1] = '\0';

        if (strcmp(line, "END") == 0)
        {
            break;
        }

        strcpy(flights[length].flight_number, strtok(line, ";"));
        flights[length].flight_duration = atof(strtok(NULL, ";"));
        strcpy(flights[length].destination, strtok(NULL, ";"));
        flights[length].passenger_count = atoi(strtok(NULL, ";"));
        length++;
    }
    fclose(file);

    // ...
}
```

### Comments

Changes applied to last week's guidelines (considering the use of function `fgets()`):

1. It is **mandatory** to check whether the user passes the first command-line argument, print a custom error message, and return the given error code.
1. It is **mandatory** to open the file.
1. It is **mandatory** to declare the `line` character array having the suitable length (the given limit plus two).
1. It is **mandatory** to remove the last, `\n` element of the `line` character array (before the comparison).
1. It is **mandatory** to use function `fgets()` instead of function `gets()`.
1. It is **mandatory** to close the file.

> [!WARNING]
>
> Double-check whether the last line is followed by the `\n` character. You `fgets()` invocation will not work properly without it.

## Step #3: Sorting records

### Instruction

Sort the array using the built-in function `qsort()`, and the following stages:

1. field `passenger_count` (descending)
1. field `destination` (ascending)
1. field `flight_duration` (descending)
1. field `flight_number` (ascending)

The following notes are applied:

1. Invoke function `qsort()` in function `main()`.
1. You can define the comparison function with any name.
1. We use the alphabetic order (ascending or descending) in the case of string fields.
1. Precision errors are not expected in the values of the input files.

### Code

```c
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

int main() {
   // ...
   qsort(flights, length, sizeof(FLIGHT), cmp);
   // ...
}
```

### Comments

See last week's comments and the dedicated guide of function `qsort()`.

## Step #4: Writing records to file

### Instruction

Open the CSV file, whose name is passed as the second command-line argument, then write the sorted sequence of records to it! Consider the following notes:

1. Implement the solution in function `main()`.
1. The file should have the same format as the input file.
1. Print an error message and exit with status code `9` if the command-line argument is not present.
1. Print an error message and exit with status code `5` if the file cannot be opened.

### Code (version *reading `n` records*)

```c
int main(int argc, char *argv[])
{
    // ...

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

    // ...
}
```

### Code (version *reading until `EOF`*)

```c
int main(int argc, char *argv[])
{
    // ...

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

    for (int i = 0; i < length; i++)
    {
        fprintf(file, "%s;%.2lf;%s;%d\n", flights[i].flight_number, flights[i].flight_duration, flights[i].destination, flights[i].passenger_count);
    }
    fclose(file);

    // ...
}
```

### Code (version *reading until terminating value*)

```c
int main(int argc, char *argv[])
{
    // ...

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

    for (int i = 0; i < length; i++)
    {
        fprintf(file, "%s;%.2lf;%s;%d\n", flights[i].flight_number, flights[i].flight_duration, flights[i].destination, flights[i].passenger_count);
    }
    fprintf(file, "END\n");
    fclose(file);

    // ...
}
```

### Comments

1. It is **mandatory** to check whether the user passes the second command-line argument, print a custom error message, and return the given error code.
1. It is **mandatory** to open the file.
1. It is **mandatory** to use function `fprintf()` instead of function `printf()`.
1. It is **mandatory** to have the same format as the input had.
1. It is **mandatory** to end each line with the character `\n` (even if it is the last one).
1. It is **mandatory** to close the file.
