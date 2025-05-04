# Passengers (version reading until terminating value)

Write a program that reads passenger records from a CSV file, then sorts and prints them to another CSV file.

## Defining record

Define the record `PASSENGER` based on a structure having the following fields:

1. `passport_number`: the unique passport number of the passenger (a string having at most `15` characters, type: `char[]`)
1. `age`: the age of the passenger (an integer number from the range `[0,120]`, type: `int`)
1. `full_name`: the full name of the passenger (a string having at most `50` characters, type: `char[]`)
1. `baggage_weight`: the weight of the passenger's baggage in kilograms (a floating-point number from the range `[0.00,50.99]`, having `2` precision digits, type: `double`)

## Reading records from file

Open and read the CSV file whose name (path) is passed as the first command-line argument. Each line represents a single record in the following format:

```
<passport_number>;<age>;<full_name>;<baggage_weight>
```

The following notes are applied:

1. Implement the solution in function `main()`.
1. The input uses the `';'` (semicolon) character as the delimiter.
1. Each line contains at most `76` characters.
1. The end of the input is denoted with a line containing the character sequence `"END"`. It is guaranteed that the input contains at most `320` records.
1. Print an error message and exit with status code `6` if the command-line argument is not present.
1. Print an error message and exit with status code `4` if the file cannot be opened.
1. The `baggage_weight` field of each passenger has `2` precision digits in its representation.
1. You can expect only valid values for all the fields.

## Sorting records

Sort the array using the built-in function `qsort()`, and the following stages:

1. field `age` (descending)
1. field `baggage_weight` (descending)
1. field `full_name` (ascending)
1. field `passport_number` (ascending)

The following notes are applied:

1. Invoke function `qsort()` in function `main()`.
1. You can define the comparison function with any name.
1. We use the alphabetic order (ascending or descending) in the case of string fields.
1. Precision errors are not expected in the values of the input files.

## Writing records to file

Open the CSV file, whose name is passed as the second command-line argument, then write the sorted sequence of records to it! Consider the following notes:

1. Implement the solution in function `main()`.
1. The file should have the same format as the input file.
1. Print an error message and exit with status code `9` if the command-line argument is not present.
1. Print an error message and exit with status code `2` if the file cannot be opened.

## Sample execution

<div class="alert alert-warning">
Note that instructors will test your solution using another input file. This sample stands here just to visualize what can be expected from a real user. The instructors will use a random-generated file that meets the specification. The sample may not cover all the possible comparisons.
</div>

### Command-line arguments

```
input.csv output.csv
```

### Content of file `input.csv`

```
X1234567890123;34;Alice Johnson;12.34
Y9876543210987;45;Bob Smith;25.67
Z1928374650912;34;Charlie Brown;50.12
W5647382910567;29;Diana Prince;33.45
A1029384756102;45;Alice Johnson;12.34
B5647382910568;29;Bob Smith;25.67
C1928374650913;34;Diana Prince;33.45
D9876543210988;45;Charlie Brown;50.12
E1234567890124;29;Alice Johnson;12.34
F5647382910569;34;Bob Smith;25.67
END
```

### Content of file `output.csv`

```
D9876543210988;45;Charlie Brown;50.12
Y9876543210987;45;Bob Smith;25.67
A1029384756102;45;Alice Johnson;12.34
Z1928374650912;34;Charlie Brown;50.12
C1928374650913;34;Diana Prince;33.45
F5647382910569;34;Bob Smith;25.67
X1234567890123;34;Alice Johnson;12.34
W5647382910567;29;Diana Prince;33.45
B5647382910568;29;Bob Smith;25.67
E1234567890124;29;Alice Johnson;12.34
END
```

