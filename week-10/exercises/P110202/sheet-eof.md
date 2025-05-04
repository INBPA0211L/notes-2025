# Aircrafts (version reading until `EOF`)

Write a program that reads aircraft records from a CSV file, then sorts and prints them to another CSV file.

## Defining record

Define the record `AIRCRAFT` based on a structure having the following fields:

1. `registration_number`: the unique registration number of the aircraft (a string having at most `10` characters, type: `char[]`)
1. `capacity`: the passenger capacity of the aircraft (an integer number from the range `[1,9999999]`, type: `int`)
1. `model`: the model of the aircraft (a string having at most `20` characters, type: `char[]`)
1. `wing_span`: the wingspan of the aircraft in meters (a floating-point number from the range `[5.00,100.99]`, having `2` precision digits, type: `double`)

## Reading records from file

Open and read the CSV file whose name (path) is passed as the first command-line argument. Each line represents a single record in the following format:

```
<registration_number>;<capacity>;<model>;<wing_span>
```

The following notes are applied:

1. Implement the solution in function `main()`.
1. The input uses the `';'` (semicolon) character as the delimiter.
1. Each line contains at most `46` characters.
The end of the input is denoted with `EOF`. It is guaranteed that the input contains at most `240` records.
1. Print an error message and exit with status code `9` if the command-line argument is not present.
1. Print an error message and exit with status code `5` if the file cannot be opened.
1. The `wing_span` field of each aircraft has `2` precision digits in its representation.
1. You can expect only valid values for all the fields.

## Sorting records

Sort the array using the built-in function `qsort()`, and the following stages:

1. field `wing_span` (ascending)
1. field `model` (descending)
1. field `capacity` (ascending)
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
1. Print an error message and exit with status code `3` if the command-line argument is not present.
1. Print an error message and exit with status code `4` if the file cannot be opened.

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
AB123CD;150;Boeing 737;28.45
XY987ZT;200;Airbus A320;30.12
LM456OP;150;Boeing 747;35.67
QR789UV;300;Concorde;25.89
GH234IJ;200;Airbus A320;28.45
CD567EF;150;Boeing 737;30.12
WX890YZ;300;Concorde;35.67
UV345ST;400;Boeing 747;25.89
EF678GH;400;Boeing 747;28.45
IJ901KL;200;Airbus A320;35.67
```

### Content of file `output.csv`

```
QR789UV;300;Concorde;25.89
UV345ST;400;Boeing 747;25.89
EF678GH;400;Boeing 747;28.45
AB123CD;150;Boeing 737;28.45
GH234IJ;200;Airbus A320;28.45
CD567EF;150;Boeing 737;30.12
XY987ZT;200;Airbus A320;30.12
WX890YZ;300;Concorde;35.67
LM456OP;150;Boeing 747;35.67
IJ901KL;200;Airbus A320;35.67
```

