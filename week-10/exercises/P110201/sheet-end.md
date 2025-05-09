# Flights (version reading until terminating value)

Write a program that reads flight records from a CSV file, then sorts and prints them to another CSV file.

## Defining record

Define the record `FLIGHT` based on a structure having the following fields:

1. `flight_number`: the unique identifier for the flight (a string having at most `10` characters, type: `char[]`)
1. `flight_duration`: the duration of the flight in hours (a floating-point number from the range `[0.00,24.99]`, having `2` precision digits, type: `double`)
1. `destination`: the destination airport of the flight (a string having at most `30` characters, type: `char[]`)
1. `passenger_count`: the number of passengers on the flight (an integer number from the range `[1,9999999]`, type: `int`)

## Reading records from file

Open and read the CSV file whose name (path) is passed as the first command-line argument. Each line represents a single record in the following format:

```
<flight_number>;<flight_duration>;<destination>;<passenger_count>
```

The following notes are applied:

1. Implement the solution in function `main()`.
1. The input uses the `';'` (semicolon) character as the delimiter.
1. Each line contains at most `55` characters.
The end of the input is denoted with a line containing the character sequence `"END"`. It is guaranteed that the input contains at most `180` records.
1. Print an error message and exit with status code `7` if the command-line argument is not present.
1. Print an error message and exit with status code `8` if the file cannot be opened.
1. The `flight_duration` field of each flight has `2` precision digits in its representation.
1. You can expect only valid values for all the fields.
1. Each line is terminated with a newline character.

## Sorting records

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

## Writing records to file

Open the CSV file, whose name is passed as the second command-line argument, then write the sorted sequence of records to it! Consider the following notes:

1. Implement the solution in function `main()`.
1. The file should have the same format as the input file.
1. Print an error message and exit with status code `9` if the command-line argument is not present.
1. Print an error message and exit with status code `5` if the file cannot be opened.

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

### Content of file `output.csv`

```
OP543;3.25;London;9999999
EF321;5.50;New York;450
KL432;5.50;Tokyo;450
MN876;7.75;New York;300
CD789;7.75;Paris;300
GH654;7.75;London;200
AB987;5.50;London;200
FL123;3.25;New York;150
IJ987;3.25;Paris;150
XY456;3.25;Tokyo;150
END
```

