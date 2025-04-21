# TODO

## Step #1: Defining record

First, you must define the type that represents a record of the CSV file.

### Instruction

Define the record `AIRPORT` based on a structure having the following fields:

* `name`: name of the airport (a string having at most `30` characters, type: `char[]`)
* `city`: name of the city (a string having at most `30` characters, type: `char[]`)
* `runways`: number of runways (a positive integer, type: `int`)
* `time`: transfer time (a positive integer, type: `int`)

### Solution

```c
typedef struct
{
    char name[31];
    char city[31];
    int runways;
    int time;
} AIRPORT;
```

### Comments

1. It is **recommended** to declare the fields in the same order as the sheet specifies them.
1. It is **recommended** to have a standalone declaration for each field.
1. It is **mandatory** to declare the integer fields using the `int` type.
1. It is **mandatory** to declare the string fields using a `char` array type.
1. It is **mandatory** to declare the character arrays having the suitable length (the given limit plus one).
1. It is **mandatory** to define a new type using the `typedef` keyword.

## Step #2a: Reading records from the standard input (version `n` test cases)

### Instruction

Each line of the standard input represents a single record in the following format:

```
<name>;<city>;<runways>;<time>
```

#### Notes

1. Solve the exercise in function `main()`.
1. The input uses semicolons (`';'`) as the delimiter.
1. Each line contains at most `100` characters.
3. The first line of the input contains the value `n` denoting the number of records. Each of the next `n` lines describes a record.

#### Sample input

```
4
Zurich Kloten;Zurich;3;360
London Heathrow;London;2;240
Istanbul Ataturk;Isztambul;3;120
Barcelona El Prat;Barcelona;3;150
```

### Solution

```c
int main() {
   char line[101];

   int length = atoi(gets(line));
   AIRPORT airports[length];

   for (int i = 0; i < length; i++)
   {
      gets(line);
      strcpy(airports[i].name, strtok(line, ";"));
      strcpy(airports[i].city, strtok(NULL, ";"));
      airports[i].runways = atoi(strtok(NULL, ";"));
      airports[i].time = atoi(strtok(NULL, ";"));
   }

   // ...
}
```

### Comments

1. It is **mandatory** to declare the `line` character array having the suitable length (the given limit plus one).
1. It is **mandatory** to avoid the mixture of `scanf()` and `gets()` function invocations; use the combination of functions `atoi()` and `gets()` to retrieve the first line's value.
1. It is **mandatory** to declare the record array having the given length.
1. It is **mandatory** to always pass the string containing the given delimiter as function `strtok()`'s second parameter.
1. It is **mandatory** to pass the `line` character array's memory address as function `strtok()`'s first parameter in the first invocation.
1. It is **mandatory** to pass the `NULL` pointer as function `strtok()`'s second parameter in the remaining invocations.
1. It is **mandatory** to copy the strings using the `strcpy()` function.
1. It is **mandatory** to retrieve the integer values using the `atoi()` function.
1. It is **mandatory** to return the `0` (`EXIT_SUCESS`) value from the `main()` function.
1. It is **recommended** to debug your code and check whether you can print the array to the standard output before sorting it. Don't forget to put the additional statements in a comment after finishing with them.

## Step #2b: Reading records from the standard input (version `EOF`)

### Instruction

Each line of the standard input represents a single record in the following format:

```
<name>;<city>;<runways>;<time>
```

#### Notes

1. Solve the exercise in function `main()`.
1. The input uses semicolons (`';'`) as the delimiter.
1. Each line contains at most `100` characters.
1. The end of the input is denoted with `EOF`. It is guaranteed, that the standard input contains at most `20` lines.

#### Sample input

```
Zurich Kloten;Zurich;3;360
London Heathrow;London;2;240
Istanbul Ataturk;Istambul;3;120
Barcelona El Prat;Barcelona;3;150
```

### Solution

```c
int main() {
   char line[101];

   AIRPORT airports[20];
   int length = 0;

   while (gets(line))
   {
      strcpy(airports[length].name, strtok(line, ";"));
      strcpy(airports[length].city, strtok(NULL, ";"));
      airports[length].runways = atoi(strtok(NULL, ";"));
      airports[length].time = atoi(strtok(NULL, ";"));
      length++;
   }

   // ...
}
```

### Comments

1. It is **mandatory** to declare the `line` character array having the suitable length (the given limit plus one).
1. It is **mandatory** to declare the record array having the given length.
1. It is **mandatory** to check for `EOF` before starting the tokenization. The `while` loop's expression is a perfect place for it.
1. It is **mandatory** to count the number of processed lines (variable `length` in the code).
1. It is **mandatory** to always pass the string containing the given delimiter as function `strtok()`'s second parameter.
1. It is **mandatory** to pass the `line` character array's memory address as function `strtok()`'s first parameter in the first invocation.
1. It is **mandatory** to pass the `NULL` pointer as function `strtok()`'s second parameter in the remaining invocations.
1. It is **mandatory** to copy the strings using the `strcpy()` function.
1. It is **mandatory** to retrieve the integer values using the `atoi()` function.
1. It is **mandatory** to return the `0` (`EXIT_SUCESS`) value from the `main()` function.
1. It is **recommended** to debug your code and check whether you can print the array to the standard output before sorting it. Don't forget to put the additional statements in a comment after finishing with them.

## Step #2c: Reading records from the standard input (version special value)

### Instruction

Each line of the standard input represents a single record in the following format:

```
<name>;<city>;<runways>;<time>
```

#### Notes

1. Solve the exercise in function `main()`.
1. The input uses semicolons (`';'`) as the delimiter.
1. Each line contains at most `100` characters.
The end of the input is denoted with a line containing the character sequence `"END"`. It is guaranteed that the standard input contains at most 20 lines. The last line should not be processed.

#### Sample input

```
Zurich Kloten;Zurich;3;360
London Heathrow;London;2;240
Istanbul Ataturk;Istambul;3;120
Barcelona El Prat;Barcelona;3;150
END
```

### Solution

```c
int main() {
   char line[101];

   AIRPORT airports[20];
   int length = 0;

   while (strcmp(gets(line), "END"))
   {
      strcpy(airports[length].name, strtok(line, ";"));
      strcpy(airports[length].city, strtok(NULL, ";"));
      airports[length].runways = atoi(strtok(NULL, ";"));
      airports[length].time = atoi(strtok(NULL, ";"));
      length++;
   }

   // ...
}
```

### Comments

1. It is **mandatory** to declare the `line` character array having the suitable length (the given limit plus one).
1. It is **mandatory** to declare the record array having the given length.
1. It is **mandatory** to check for the terminating value before starting the tokenization. The `while` loop's expression is a perfect place for it.
1. It is **mandatory** to count the number of processed lines (variable `length` in the code).
1. It is **mandatory** to always pass the string containing the given delimiter as function `strtok()`'s second parameter.
1. It is **mandatory** to pass the `line` character array's memory address as function `strtok()`'s first parameter in the first invocation.
1. It is **mandatory** to pass the `NULL` pointer as function `strtok()`'s second parameter in the remaining invocations.
1. It is **mandatory** to copy the strings using the `strcpy()` function.
1. It is **mandatory** to retrieve the integer values using the `atoi()` function.
1. It is **mandatory** to return the `0` (`EXIT_SUCESS`) value from the `main()` function.
1. It is **recommended** to debug your code and check whether you can print the array to the standard output before sorting it. Don't forget to put the additional statements in a comment after finishing with them.

## Step #3: Sorting records

### Instruction

Sort the array using built-in function `qsort()`, and the following stages:

1. number of runways (descending)
2. transfer time (descending)
3. name (ascending)

#### Notes

1. Invoke function `qsort()` in function `main()`.

### Code

```c
int cmp(const void *a, const void *b)
{
    AIRPORT *left = (AIRPORT *)a;
    AIRPORT *right = (AIRPORT *)b;

    if (left->runways != right->runways)
    {
        return -(left->runways - right->runways);
    }

    if (left->time != right->time)
    {
        return -(left->time - right->time);
    }

    return strcmp(left->name, right->name);
}

int main() {
   // ...
   qsort(airports, length, sizeof(AIRPORT), cmp);
   // ...
}
```

### Comments

1. It is **mandatory** to declare the function having two `const void *` parameters (the memory addresses of the array elements) and the return type `int`.
1. It is **recommended** to declare two casted pointers since it simplifies the further syntax.
1. It is **mandatory** to check all the stages one-by-one, in the given order:

   1. Return a negative value if the left element goes first.
   1. Return a positive value if the right element goes first.
   1. Return the value of `0` only in the last stage.

1. It is **recommended** to compare integers using subtraction (since the comparison operators would make the syntax more complex).
1. It is **mandatory** to compare strings using the `strcmp()` function.
1. It is **mandatory** to invoke the `qsort()` function using the required parameters:

   1. The memory address of the array.
   1. The number of elements in the array.
   1. The size of an element in bytes.
   1. The name of the comparison function.

## Step #4: Writing records to the standard output

### Instruction

Write the elements of the sorted array to the standard output using the following format:

```
<name> (<city>): <time>
```

#### Notes

1. Each line contains one record.

#### Sample output

The following lines should be printed to the standard output in the case of all input formats:

```
Zurich Kloten (Zurich): 360
Barcelona El Prat (Barcelona): 150
Istanbul Ataturk (Istambul): 120
London Heathrow (London): 240
```

### Code

```c
int main() {
   // ...
   for (int i = 0; i < length; i++)
   {
      printf("%s (%s): %d\n", airports[i].name, airports[i].city, airports[i].time);
   }
   // ...
}
```

### Comments

1. It is **mandatory** to print exactly the expected characters. Each missing or unneccessarily added character matters.
1. It is **mandatory** to terminate each line with a newline character.
1. It is **recommended** to use the `printf()` function.

