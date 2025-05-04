# Flights (version reading until terminating value)

Write a program that reads flight records from a CSV file, then sorts and prints them to another CSV file.

## Defining record

Define the record `FLIGHT` based on a structure having the following fields:

1. `flight_number`: the unique identifier for the flight (a string having at most `10` characters, type: `char[]`)
1. `destination`: the destination airport of the flight (a string having at most `30` characters, type: `char[]`)
1. `flight_duration`: the duration of the flight in hours (a floating-point number from the range `[0.00,24.99]`, having `2` precision digits, type: `double`)
1. `passenger_count`: the number of passengers on the flight (an integer number from the range `[1,9999999]`, type: `int`)

## Reading records from file

Open and read the CSV file whose name (path) is passed as the first command-line argument. Each line represents a single record in the following format:

```
<flight_number>;<destination>;<flight_duration>;<passenger_count>
```

The following notes are applied:

1. Implement the solution in function `main()`.
1. The input uses the `';'` (semicolon) character as the delimiter.
1. Each line contains at most `55` characters.
1. The end of the input is denoted with a line containing the character sequence `"END"`. It is guaranteed that the input contains at most `300` records.
1. Print an error message and exit with status code `2` if the command-line argument is not present.
1. Print an error message and exit with status code `3` if the file cannot be opened.
1. The `flight_duration` field of each flight has `2` precision digits in its representation.
1. You can expect only valid values for all the fields.

## Sorting records

Sort the array using the built-in function `qsort()`, and the following stages:

1. field `flight_duration` (descending)
1. field `destination` (ascending)
1. field `passenger_count` (descending)
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
1. Print an error message and exit with status code `6` if the file cannot be opened.

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
FL123;New York;5.25;1500
AB987;London;3.75;2300
XY456;Tokyo;7.50;1800
CD321;Paris;2.85;1200
EF654;New York;5.25;2300
GH789;London;3.75;1500
IJ012;Tokyo;7.50;1200
KL345;Paris;2.85;1800
MN678;New York;6.10;1500
OP901;London;4.20;2300
END
```

### Content of file `output.csv`

```
XY456;Tokyo;7.50;1800
IJ012;Tokyo;7.50;1200
EF654;New York;5.25;2300
FL123;New York;5.25;1500
MN678;New York;6.10;1500
AB987;London;3.75;2300
KL345;Paris;2.85;1800
GH789;London;3.75;1500
CD321;Paris;2.85;1200
OP901;London;4.20;2300
END
```

