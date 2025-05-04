[↑ Back](../README.md)

# Week #10

## Topics

Data handling #2 (structures, reading and writing files, processing CSV documents, functions `qsort` and `bsearch`)

## Agenda

1. Opening files for reading and writing.
2. Function `bsearch()`.

## Sample codes

### Using function `bsearch()`

1. [`test_bsearch_int.c`](./samples/test_bsearch_int.c) - Sorts an `int` array using `qsort`, then uses function `bsearch` to find an element.
1. [`test_bsearch_char.c`](./samples/test_bsearch_char.c) - Sorts a `char` array using `qsort`, then uses function `bsearch` to find an element.
1. [`test_bsearch_args_1.c`](./samples/test_bsearch_args_1.c) - Sorts the command-line arguments using `qsort`, then uses function `bsearch` to find an element.
1. [`test_bsearch_args_2.c`](./samples/test_bsearch_args_2.c) - Sorts the command-line arguments using `qsort` (considering the lengths first) then uses function `bsearch` to find an element.
1. [`test_bsearch_args_3.c`](./samples/test_bsearch_args_3.c) - Sorts the command-line arguments using `qsort` (case insensitive version), then uses function `bsearch` to find an element.

### Solutions for exercise `P110101` *Airports*

1. [`P110101_eof.c`](./samples/P110101_eof.c) - Sample solution exercise `P110101` (version *reading until `EOF`*).
1. [`P110101_n.c`](./samples/P110101_n.c) - Sample solution exercise `P110101` (version *reading `n` records*).
1. [`P110101_end.c`](./samples/P110101_end.c) - Sample solution exercise `P110101` (version *reading until terminating value*).

### Solutions for exercise `P110201` *Flights*

1. [`P110201_eof.c`](./samples/P110201_eof.c) - Sample solution exercise `P110201` (version *reading until `EOF`*).
1. [`P110201_n.c`](./samples/P110201_n.c) - Sample solution exercise `P110201` (version *reading `n` records*).
1. [`P110201_end.c`](./samples/P110201_end.c) - Sample solution exercise `P110201` (version *reading until terminating value*).

## Exercises

### New versions of last week's exercises

* [`P110101` - Airports](./exercises/P110101.md)
* [`P110102` - Roller Coasters](./exercises/P110102.md)
* [`P110103` - LEGO Sets](./exercises/P110103.md)
* [`P110104` - Hogwarts](./exercises/P110104.md)
* [`P110105` - Spotify tracks](./exercises/P110105.md)

### Sample exercises for the *Lab test*

* [`P110201` - Flights](./exercises/P110201/README.md)
* [`P110202` - Aircrafts](./exercises/P110202/README.md)
* [`P110203` - Passengers](./exercises/P110203/README.md)

## Highlights

1. [Explanation for the `P110201` - *Flights* exercise](./flights-explanation.md)

## Required skills

> [!IMPORTANT]
> The next lab will be based on the following expectations. Please ensure that you are aware of all the skills mentioned. Ask your questions using the available Q&A form in Moodle.

1. You must be able to open CSV files for reading and writing.
1. You must be able to use the file-related functions of `stdio.h`.

