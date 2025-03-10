[↑ Back](../README.md)

# Week #03

## Topics

Language basics #2 (types, variables, expressions, statements, handling standard I/O, built-in functions, procedures, recursion).

## Agenda

1. The `while` loop.
2. The `for` loop.
3. The `do while` loop.
4. The `break` and `continue` statements in loops.
5. Three common types of inputs.
6. The ProgCont system's verdict types.
7. Further `stdio.h` functions.


## Sample codes

1. [`test_while.c`](./samples/test_while.c)
2. [`test_for.c`](./samples/test_for.c)
3. [`test_do_while.c`](./samples/test_do_while.c)
4. [`euclidean_while.c`](./samples/euclidean_while.c)
5. [`euclidean_for_1.c`](./samples/euclidean_for_1.c)
5. [`euclidean_for_2.c`](./samples/euclidean_for_2.c)

## Exercises

### Basic exercises

1. [Arithmetic operators](./exercises/PC200777.md)
2. [Average of integers](./exercises/PC200780.md)
3. [Minimum of integers](./exercises/PC200783.md)
4. [Maximum of integers](./exercises/PC200785.md)
5. [GCD](./exercises/PC200787.md)
6. [Relative primes](./exercises/PC200788.md)
7. [Prime test](./exercises/PC200789.md)
8. [Grading](./exercises/PC200790.md)

### Advanced exercises

1. [TeX Quotes](./exercises/PC200272.md)
2. [Fractions](./exercises/PC200501.md)
3. [Dog contest](./exercises/PC200514.md)

## Highlights

### Boolean (logic) values

Language C doesn't have a boolean (logic) type. Zeroes (having any type) represent `false`, and other values represent `true`.

### Loops

* The middle expression of the loop `for` should be a logical one. There is no other restriction on the expressions.
* The body of the `do while` loops is always being executed before evaluating the expression for the first time.
* Do not want to store a line as a string if you don't know its possible length. You can read the input's characters one by one instead of it.
* Each `for` can be rearranged to be a `while`. The same applies to the other direction.
* You can skip the remaining statements of the block using the `continue` keyword. You can terminate the loop using the `break` keyword. These keywords are the same as they were in Python.

## Required skills

> [!IMPORTANT]
> The next lab will be based on the following expectations. Please ensure that you are aware of all the skills mentioned. Ask your questions using the available Q&A form in Moodle.

1. You must be able to use the `switch` statement.
1. You must be able to use all the loops (`while`, `for`, and `do while`).
1. You must be able to use the statements `continue` and `break` in loops.

