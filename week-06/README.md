[↑ Back](../README.md)

# Week #06

## Topics

Data structures and built-in functions #2 (1D character arrays, strings)

## Agenda

1. Handling charter arrays and strings in the `main()` function.
1. Passing strings to functions.
1. The built-in functions for handling strings and characters (`string.h`, `ctype.h`, and `stdio.h`).

## Sample codes

1. [`test_string.c`](./samples/test_string.c)

## Exercises

### ProgCont exercises

1. [`PC200504` Sentence-ending punctuation](./exercises/PC200504.md)
1. [`PC200508` Counting Fruits](./exercises/PC200508.md)
1. [`PC200511` Counting Words](./exercises/PC200511.md)
1. [`PC200512` THE END](./exercises/PC200512.md)
1. [`PC200656` Pizzas](./exercises/PC200656.md)

## Highlights

### Representation of strings

1. Language C represents strings as character sequences.
1. A character is represented by its ASCII code.
1. A string is identified by its start memory address.
1. A string is terminated by the `0` ASCII code (literal `'\0'`).

### Handling strings

1. Use the functions of header `string.h` if it is possible to manipulate strings and get their length.

### Functions

In this section, we list all the functions that should be known starting this week. You know a function if you can invoke it correctly using [the official C reference](https://arato.inf.unideb.hu/panovics.janos/stdc.pdf).

#### Functions of `stdio.h` for I/O handling

1. `char *gets(char *start)`

  * Reads the next line of the standard input to the memory address `start`.
  * Returns:
    * `NULL` if the case of `EOF`.
    * the memory address `start` otherwise

1. `int puts(char *start)`

  * Writes the string at memory address `start` to the standard output. Also prints a newline character.
  * Returns: *not important*

#### Functions of `stdlib.h` for data conversion

1. `double atof(char *s)` - Returns the `double` value of the given string.
1. `int atoi(char *s)` - Returns the `int` value of the given string.

### Functions of `string.h`

1. `size_t strlen(char *s)`

  * Counts the characters until the first `0` ASCII code.
  * Returns the length of parameter `s`.

1. `char *strcpy(char *left, char *right)`

  * Copies parameter `right` to the memory address of parameter `left`.
  * Returns the memory address of parameter `left`.

1. `char *strcat(char *left, char *right)`

  * Concatenates parameter `right` to the value of parameter `left`.
  * Returns the memory address of parameter `left`.

1. `int strcmp(char *left, char *right)`

  * Compares parameters `left` and `right` based on their alphabetical order. The ASCII values are used in the comparison.
  * Returns `0` if the two strings are equal.
  * Returns `-1` if the parameter `left` goes first in the order.
  * Returns `1` if the parameter `right` goes first in the order.

1. `char *strchr(char *s, char c)`

  * Determines the first position of character `c` in string `s`.
  * Returns the memory address of the first occurrence of `c` in `s`.
  * Returns `NULL` if `s` does not contain `c`.

1. `char *strstr(char *s, char *p)`

  * Determines the first position of string `p` in string `s`.
  * Returns the memory address of the first occurrence of `p` in `s`.
  * Returns `NULL` if `s` does not contain `p`.

1. `char *strrchr(char *s, char c)`

  * Determines the last position of character `c` in string `s`.
  * Returns the memory address of the last occurrence of `c` in `s`.
  * Returns `NULL` if `s` does not contain `c`.

1. `char *strrstr(char *s, char *p)`

  * Determines the last position of string `p` in string `s`.
  * Returns the memory address of the last occurrence of `p` in `s`.
  * Returns `NULL` if `s` does not contain `p`.

## Required skills

> [!IMPORTANT]
> The next lab will be based on the following expectations. Please ensure that you are aware of all the skills mentioned. Ask your questions using the available Q&A form in Moodle.

1. You must be able to declare strings and understand their representation.
1. You must be able to use the functions `gets()` and `puts()`.
1. You must be able to use the functions of header `string.h`.
