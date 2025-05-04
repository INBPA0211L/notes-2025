# Aircrafts (version reading until terminating value)

Write a program that reads aircraft records from a CSV file, then sorts and prints them to another CSV file.

## Defining record

Define the record `AIRCRAFT` based on a structure having the following fields:

1. `registration_number`: the unique registration number of the aircraft (a string having at most `10` characters, type: `char[]`)
1. `wing_span`: the wingspan of the aircraft in meters (a floating-point number from the range `[5.00,100.99]`, having `2` precision digits, type: `double`)
1. `model`: the model of the aircraft (a string having at most `20` characters, type: `char[]`)
1. `capacity`: the passenger capacity of the aircraft (an integer number from the range `[1,9999999]`, type: `int`)

## Reading records from file

Open and read the CSV file whose name (path) is passed as the first command-line argument. Each line represents a single record in the following format:

```
<registration_number>;<wing_span>;<model>;<capacity>
```

The following notes are applied:

1. Implement the solution in function `main()`.
1. The input uses the `';'` (semicolon) character as the delimiter.
1. Each line contains at most `46` characters.
1. The end of the input is denoted with a line containing the character sequence `"END"`. It is guaranteed that the input contains at most `180` records.
1. Print an error message and exit with status code `6` if the command-line argument is not present.
1. Print an error message and exit with status code `2` if the file cannot be opened.
1. The `wing_span` field of each aircraft has `2` precision digits in its representation.
1. You can expect only valid values for all the fields.

## Sorting records

Sort the array using the built-in function `qsort()`, and the following stages:

1. field `capacity` (ascending)
1. field `model` (ascending)
1. field `wing_span` (descending)
1. field `registration_number` (descending)

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
1. Print an error message and exit with status code `7` if the file cannot be opened.

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
AB1234;15.37;Boeing 737;180
CD5678;22.45;Airbus A320;150
EF9012;15.37;Boeing 747;300
GH3456;30.12;Concorde;100
IJ7890;22.45;Boeing 737;180
KL2345;15.37;Airbus A320;150
MN6789;30.12;Boeing 747;300
OP0123;22.45;Concorde;100
QR4567;15.37;Boeing 737;180
ST8901;30.12;Airbus A320;150
END
```

### Content of file `output.csv`

```
GH3456;30.12;Concorde;100
OP0123;22.45;Concorde;100
ST8901;30.12;Airbus A320;150
CD5678;22.45;Airbus A320;150
KL2345;15.37;Airbus A320;150
IJ7890;22.45;Boeing 737;180
QR4567;15.37;Boeing 737;180
AB1234;15.37;Boeing 737;180
MN6789;30.12;Boeing 747;300
EF9012;15.37;Boeing 747;300
END
```

