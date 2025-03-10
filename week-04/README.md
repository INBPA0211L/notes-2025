[↑ Back](../README.md)

# Week #04

## Topics

Language basics #3 (types, variables, expressions, statements, handling standard I/O, built-in functions, procedures, recursion).

## Agenda

1. Three common types of inputs.
1. The ProgCont system's verdict types.
1. Further `stdio.h` functions.
1. Writing basic functions
1. Writing recursive functions

## Sample codes

1. [`euclidean_while.c`](./samples/euclidean_while.c)
1. [`euclidean_for_1.c`](./samples/euclidean_for_1.c)
1. [`euclidean_for_2.c`](./samples/euclidean_for_2.c)
1. [`shapes.c`](./samples/shapes.c)
2. [`factorial.c`](./samples/factorial.c)
3. [`fibonacci.c`](./samples/fibonacci.c)

## Exercises from the previous week

### Basic exercises

1. [Arithmetic operators](../week-03/exercises/PC200777.md)
2. [Average of integers](../week-03/exercises/PC200780.md)
3. [Minimum of integers](../week-03/exercises/PC200783.md)
4. [Maximum of integers](../week-03/exercises/PC200785.md)
5. [GCD](../week-03/exercises/PC200787.md)
6. [Relative primes](../week-03/exercises/PC200788.md)
7. [Prime test](../week-03/exercises/PC200789.md)
8. [Grading](../week-03/exercises/PC200790.md)

### Advanced exercises

1. [TeX Quotes](../week-03/exercises/PC200272.md)
2. [Fractions](../week-03/exercises/PC200501.md)
3. [Dog contest](../week-03/exercises/PC200514.md)

## New exercises

### Without writing functions

1. [Signs](./exercises/PC200509.md)
1. [The Greatests](./exercises/PC200517.md)

### With writing functions

1. [Santa Claus Arrives](./exercises/PC200657.md)

## Highlights

### About End of File (`EOF`)

The End of Line (`EOF`) can be determined based on the returned value of an input function:

* `scanf()` returns the number of stored values
* `getchar()` returns the `-1` non-ASCII code

### Header `math.h`

If you have a non-literal expression as some of the `math.h` functions' parameters you may have to use the flag `-lm` in your `gcc` command.

## Required skills

> [!IMPORTANT]
> The next lab will be based on the following expectations. Please ensure that you are aware of all the skills mentioned. Ask your questions using the available Q&A form in Moodle.

1. You must be able to process the common input formats.
1. You must be able to use the ProgCont system and understand the verdicts.
1. You must be able to understand the returned value and the parameters (arguments) of a built-in function based on the official cheat sheet.
