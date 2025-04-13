[↑ Back](../README.md)

# Week #08

## Topics

Data structures and built-in functions #3 (multidimensional arrays, consuming command-line arguments).

## Agenda

* Various representations of multidimensional arrays.
* Command-line arguments.

## Sample codes

1. [`test_args.c`](./samples/test_args.c)
4. [`test_matrices_1.c`](./samples/test_matrices_1.c)
2. [`test_matrices_2.c`](./samples/test_matrices_2.c)
3. [`test_matrices_3.c`](./samples/test_matrices_3.c)
4. [`test_multi_arrays.c`](./samples/test_multi_arrays.c)

## Exercises

### Command-line arguments

* [`PC200689` - The Curse of Magnitude](./exercises/args/PC200689.md)
* [`PC200693` - Accuracy Matters!](./exercises/args/PC200693.md)
* [`PC200701` - Pull the Shortest!](./exercises/args/PC200701.md)
* [`PC200717` - Avadakedavra](./exercises/args/PC200717.md)

### Matrices

* [`PC200587` - A Long Copy](./exercises/matrices/PC200587.md)
* [`PC200589` - The First Fruits](./exercises/matrices/PC200589.md)
* [`PC200591` - The Last Mohican](./exercises/matrices/PC200591.md)

## Highlights

### Command-line arguments

1. The `main()` function's signature can be extended to have formal parameters in the following form:

   ```c
   int main(int argc, char *argv[]) {

   }
   ```

   1. Parameter `argc` is the number of command-line arguments (including the executable's name).
   1. Parameter `argv` is the array of the command-line arguments' memory addresses:

      1. The first `argc` elements store the memory addresses of the arguments.
      1. An additional, extra element contains the `NULL` pointer.

1. The command-line arguments are always strings.
1. The `argc` parameter can be used without the `argv` parameter. However, their order is strict; as a consequence, we cannot access the `argv` value standalone.

### Matrices

1. Matrices can be considered as *arrays of arrays*.
1. The elements are stored row-wise.
1. Accessing elements:

   1. In the declaring function, we can use multiple `[]` operators to access the required element. 
   1. In other functions we don't have any information about the shape, just the start `memory` address (similar to 1D arrays). The elements' memory addresses must be calculated manually: for retrieving the element `m[row][col]` use the expression `m[row * number_of_cols + col]`.

### Forward function declaration

1. Functions can be declared without implementing them. This can be helpful in various scenarios, such as verifying that the function will have the given signature.
1. Syntax:

   ```c
   int main(int, char *[]);
   ```

   The names of the formal parameters are omitted, and the body is replaced with a semicolon.

## Required skills

> [!IMPORTANT]
> The next lab will be based on the following expectations. Please ensure that you are aware of all the skills mentioned. Ask your questions using the available Q&A form in Moodle.

1. You must be able to access the command-line arguments.
1. You must be able to declare matrices and pass them to another functions.
1. You must be able to declare a function based on its forward declaration.
