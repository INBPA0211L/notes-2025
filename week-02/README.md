[↑ Back](../README.md)

# Week #02

## Topics

Language basics #1 (types, variables, expressions, statements, handling standard I/O, built-in functions, procedures, recursion).

## Agenda

1. Declaring variables
2. Basic types
3. Reading values from the standard input using the function `scanf()`
4. Printing values to the standard output using the function `printf()`
5. The `if` and `if else` statements
6. The `switch` statement

## Sample codes

1. [`shapes.c`](./samples/shapes.c)
1. [`calculator_if_01.c`](./samples/calculator_if_01.c)
1. [`calculator_if_02.c`](./samples/calculator_if_02.c)
1. [`calculator_if_03.c`](./samples/calculator_if_03.c)
1. [`calculator_if_04.c`](./samples/calculator_if_04.c)
1. [`calculator_switch_01.c`](./samples/calculator_switch_01.c)
1. [`calculator_switch_02.c`](./samples/calculator_switch_02.c)

## Highlights

### Declaring variables

* use syntax `int a;` to declare a single variable
* use syntax `int a = 5;` to assign a default value to the variable
* use syntax `int a, b;` to declare multiple variables

### Using functions `printf()` and `scanf()`

1. type `char`: `%c`
1. type `int`: `%d`
1. type `float`: `%f`
1. type `double`: `%lf` (use `%.2lf` to have two precision digits)

### Statement `if else`

1. only one statement or block belongs to the control statement
1. an `else` branch can have a nested `if` statement
1. the previous syntax can be simplified to have an `else if` construct

### About division

The `/` (slash) operator performs an integer division between two integer operands. You must have at least one real (`float` or `double`) operand to get a real result. You can explicitly change a type of an expression by so-called casting its value. Thus, you can use one of the following syntaxes:

1. `(double) a / b`
1. `a / (double) b`
1. `(double) a / (double) b`

Be careful, because syntax `(double) (a / b)` does not work. In this case, you first determine the integer result, then convert it to `double`. Thus, the result would be `2.0` for `5 / 2`.

### Statement `switch`

1. the expression should be implicitly converted to `int`
1. `case` labels have literal values
1. each case can appear only once, the order doesn't matter
1. after evaluating the expression we jump to the corresponding `case`
1. we execute each statement after the `case` label until the first `break` statement or the end of the `switch`'s block

## Required skills

> [!IMPORTANT]
> The next lab will be based on the following expectations. Please ensure that you are aware of all the skills mentioned. Ask your questions using the available Q&A form in Moodle.

1. You must be able to declare variables.
1. You must be able to use functions `scanf()` and `printf()` together with the types `char`, `int`, `float`, and `double`.
1. You must be able to use the `if else` statements.
1. You must be able to use the `switch` statements.
