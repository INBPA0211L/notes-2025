[↑ Back](../README.md)

# Week #07

## Topics

Data structures and built-in functions #3 (dynamic memory allocation).

## Agenda

3. Returning strings from functions.
1. The built-in functions for handling strings and characters (`string.h`, `ctype.h`, and `stdio.h`).

## Sample codes

4. [`test_ctype.c`](./samples/test_ctype.c)
2. [`test_malloc.c`](./samples/test_malloc.c)
3. [`test_calloc.c`](./samples/test_calloc.c)

## Exercises

### Permuted exercises

1. [`P1051` Strings - removing characters](./exercises/P1051/README.md)
1. [`P1052` Strings - duplicating characters](./exercises/P1052/README.md)
1. [`P1053` Strings - modifying characters](./exercises/P1053/README.md)

## Highlights

### Allocating in the heap

1. By using static (classic) array declarations, all your allocated memory will be in the stack. These spaces will be de-allocated immediately after you return from the function. Thus, it is impossible to return their addresses from the functions (to be honest you can return them, but the values values cannot be used in the caller function).
1. You can reserve memory in the heap by using functions `calloc()` and `malloc()`. In this case, the de-allocation of the given memory segment is your responsibility too. Thus, it is mandatory to use the function `free()` for this reason.

### Functions

In this section, we list all the functions that should be known starting this week. You know a function if you can invoke it correctly using [the official C reference](https://arato.inf.unideb.hu/panovics.janos/stdc.pdf).

#### Functions of `stdlib.h` for data conversion

1. `double atof(char *s)` - Returns the `double` value of the given string.
1. `int atoi(char *s)` - Returns the `int` value of the given string.

### Functions of `stdlib.h`

1. `void *malloc(size_t size)`

  * Allocates a memory segment with the number of `size` bytes.
  * Returns the start memory address of the allocated memory segment.

1. `void *calloc(size_t number, size_t element_size)`

  * Allocates a memory segment for `number` elements, each having the size of `element_size` bytes.
  * Returns the start memory address of the allocated memory segment.

1. `void free(void *address)`

  * De-allocates the memory segment allocated for the given start memory address using `malloc()` and `calloc()` functions.

### Functions of `ctype.h`

The following functions return a logic value determining whether the given parameter belongs to a specific category of characters:

1. `int isalnum(char c)` - Returns whether character `c` is alphanumeric.
1. `int isalpha(char c)` - Returns whether character `c` is alphabetic.
1. `int iscntrl(char c)` - Returns whether character `c` is control.
1. `int isdigit(char c)` - Returns whether character `c` is a decimal digit.
1. `int isgraph(char c)` - Returns whether character `c` is a printable character.
1. `int islower(char c)` - Returns whether character `c` is lowercase.
1. `int ispunct(char c)` - Returns whether character `c` is neither a control nor an alphanumeric character.
1. `int isspace(char c)` - Returns whether character `c` is a whitespace character.
1. `int isupper(char c)` - Returns whether character `c` is uppercase.
1. `int isxdigit(char c)` - Returns whether character `c` is a hexadecimal digit.

The following functions return a character according to their description:

1. `int tolower(char c)` - Returns the lowercase version of character `c`.
1. `int toupper(char c)` - Returns the uppercase version of character `c`.

## Required skills

> [!IMPORTANT]
> The next lab will be based on the following expectations. Please ensure that you are aware of all the skills mentioned. Ask your questions using the available Q&A form in Moodle.

1. You must be able to use dynamic memory allocation.
1. You must be able to use the mentioned functions of `stdlib.h`.
1. You must be able to use the mentioned functions of `ctype.h`.
