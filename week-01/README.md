[↑ Back](../README.md)

# Week #01

## Topics

The environment (`gcc` compiler, VS Code, Hello World), compilation vs. runtime.

## Agenda

1. Python vs. C in concepts
2. VS Code, GCC compiler
3. Hello, World!

## Sample codes

1. [`01_hello_world.c`](./samples/01_hello_world.c)
1. [`02_hello_world.c`](./samples/02_hello_world.c)

## Highlights

### Using *VS Code* and Windows

1. Creating and saving an empty source file.
1. Installing and enabling the *C/C++ extension*.
1. Formatting the source code.
1. Opening the working directory in *File explorer*.
1. Opening the command-line prompt (`cmd`) in the given folder.

### *VS Code*'s configuration

Opening the configuration file:

1. press <kbd>F1</kbd>
1. type *Preferences: Open User Settings (JSON)*

Sample configuration:

```json
{
    "security.workspace.trust.untrustedFiles": "open",
    "workbench.colorTheme": "Default Dark Modern",
    "editor.fontSize": 14,
    "C_Cpp.default.compilerPath": "c:/MinGW/bin/gcc.exe"
}
```

Properties:

1. `workbench.colorTheme`: editor's color theme

   Feel free to adjust the value or add the line to the configuration.  

1. `editor.fontSize`: editor's font size

   Feel free to adjust the value or add the line to the configuration.

1. `C_Cpp.default.compilerPath`: the compiler's path

   Configure it on your computer if the `#include` statements are underlined.

> [!WARNING]
> There might be other properties; do not modify or delete them!

### Lifecycle

1. Editing the source code, output: source code (`.c`).
1. Pre-compilation, output: pre-compiled code (`.c`)
1. Compilation, output: object (binary) code (`.o`)
1. Linking, output: executable (`.exe` in Windows)

### Command `gcc` and its options

1. Using `-o` to rename the output file.
1. Using `-E` to pre-compile the code.

   1. resolves the `#include` statements
   1. removes the comments
   1. replaces the named constants with their values
   1. replaces the macros with their values

1. Using `-c` to compile the code.
1. Using `-std` to choose the version.

   1. check the end-line comments using `-std=c90` or `-ansi`
   1. check the end-line comments using `-std=c99`

1. Using *nothing* for linking the code.

### The basic *Hello, world!* program and its syntax

1. the `#include` statements, header files `stdio.h` and `stdlib.h`
1. the `main()` function's signature
1. the `printf()` function to print a line

   1. the string delimiter is `"` (quote mark)
   1. every line is terminated by a newline character (`\n`) by definition

1. the `0` exit code, the `EXIT_SUCESS` named constant
1. uses [ASCII encoding](https://www.alpharithms.com/ascii-table-512119/) 

### Additional features

1. the `//` end-line comment
1. the `/* */` block comment
1. defining and using own named constants
1. defining and using own macros

## Required actions at home

* Set up a GCC compiler on your computer. For Windows, we recommend installing [MinGW following this tutorial](https://www.geeksforgeeks.org/installing-mingw-tools-for-c-c-and-changing-environment-variable/).
* Setup a [VS Code](https://code.visualstudio.com/) on your computer, install [extension C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools).

## Required skills

> [!IMPORTANT]
> The next lab will be based on the following expectations. Please ensure that you are aware of all the skills mentioned. Ask your questions using the available Q&A form in Moodle.

1. You must be able to use VS Code's basic features.
1. You must be able to open a command-line prompt in a given folder.
1. You must be able to use the command `gcc` (with all the discussed options).
1. You must understand the compilation process.
1. You must be able to run your executable via the command-line prompt (`cmd`).
1. You must be able to create a *Hello, World!*'s program.
1. You must be able to use the pre-compiler's features:

   1. use comments
   1. use and define named constants
   1. use and define macros

1. You must know that each line is terminated by a newline character by definition.