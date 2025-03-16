[↑ Back](../README.md)

# Week #05

## Topics

Data structures and built-in functions #1 (pointers, 1D numeric arrays).

## Agenda

1. Memory addresses and pointers.
1. Declaring and using arrays in the `main` function.
1. Passing arrays to functions.

## Sample codes

1. [`01_pointer_function.c`](./samples/01_pointer_function.c)
1. [`02_shapes_with_pointers.c`](./samples/02_shapes_with_pointers.c)
1. [`03_array_basics.c`](./samples/03_array_basics.c)
1. [`04_array_random.c`](./samples/04_array_random.c)

## Exercises

1. `P1041` - [Arrays - counting elements](./exercises/P1041/README.md)
1. `P1042` - [Arrays - validating elements](./exercises/P1042/README.md)

## Highlights

### Memory addresses and pointers

1. Pointers are special types that store memory addresses.
1. The `&` operator retrieves the memory address of a variable.
1. The `*` retrieves the value at the given memory address.
1. The pointer types have the format `<type> *` where `type` denotes the value at the memory address, such as `int` or `double`.
1. You can pass the memory address of a variable to another function.
1. You can perform arithmetic operations on memory addresses.

### Declaring and using arrays in the `main` function

1. You can declare arrays using the syntax

   ```c
   int numbers[5];
   ```

   where
   
   * `int` is the type of the elements
   * `numbers` is the name of the array
   * `5` is the size of the array.

1. The index of the first element is `0`.
1. The size of an array is `length * element_size`.
1. The elements of an array are stored sequentally.
1. The array's name refers to the memory address of the first element.
1. The expression `numbers[i]` is equavivalent to the expression `*(numbers + i)`.
1. The expression `&numbers[i]` is equavivalent to the expression `numbers+i`.
1. The use of valid indices is the programmer's responsibility. You can over-index an array.
1. The `sizeof` operator determines the allocated size of the array (in bytes).
1. Arrays can be initialized using the block operators:

   1. the length can be determined automatically based on the number of initial values
   1. the remaining elements can be initialized az `0` bit sequences in the case of less initial values

### Passing arrays to functions

1. You can pass the memory address of an array to a function together with its length.
1. The `sizeof` operator determines the size of the pointer.
1. The traversion of the array then works as in the `main()` function.

## Required skills

> [!IMPORTANT]
> The next lab will be based on the following expectations. Please ensure that you are aware of all the skills mentioned. Ask your questions using the available Q&A form in Moodle.

1. You must be able to declare arrays.
1. You must be able to traverse and process arrays in the `main()` function.
1. You must be able to print the elements of an array separated by single spaces.
1. You must be able to pass the memory address of an array together with its length to a function, then manage basic algorithms, such as:

   1. exercises from the batch `P1041` - [Arrays - counting elements](./exercises/P1041/README.md)
   1. exercises from the batch `P1042` - [Arrays - validating elements](./exercises/P1042/README.md)

