[↑ Back](./README.md)

# Implementing the comparison function for `qsort()`

## Signature

```c
int cmp(const void *, const void *);
```

* The function returns an `int` value, similar to the `strcmp()` function:

   * a negative value if the `left` parameter goes first
   * a positive value if the `right` parameter goes first
   * `0` in the case of equality

## General algorithm

Checking the sorting stages step by step:

1. Determining whether the `left` and `right` values differ:

   1. `yes`: returning a `negative` or `positive` value

   1. `no`: do we have the last stage?

      1. `yes`: return `0`

      1. `no`: checking the next stage

## Comparing `int` fields

There are multiple methods to compare two integers and decide which one goes first:

1. We can use the comparison operators and return explicit values.

1. We can make the decision based on the substraction of the two values.

### Examples

1. Ascending order, version #1:

   ```c
   if (left->time < right->time)
   {
      return -1;
   }

   if (left->time > right->time)
   {
      return 1;
   }

   return 0; // in the last stage
   ```

1. Ascending order, version #2:

   ```c
   if (left->runways != right->runways)
   {
      return left->runways - right->runways;
   }
   ```

1. Ascending order, version #3:

   ```c
   int result = left->runways - right->runways;
   if (result)
   {
      return result;
   }
   ```

1. Descending order, version #1:

   ```c
   if (right->runways != left->runways)
   {
      return right->runways - left->runways;
   }
   ```

1. Descending order, version #2:

   ```c
   int result = right->runways != left->runways;
   if (result)
   {
      return result;
   }
   ```

1. Descending order, version #3:

   ```c
   if (left->runways != right->runways)
   {
      return - (left->runways - right->runways);
   }
   ```

1. Descending order, version #4:

   ```c
   int result = left->runways - right->runways;
   if (result)
   {
      return - result;
   }
   ```

## Comparing `double` fields

Comparing real values should be done carefully in real life since precision errors can appear in each value's representation (especially when we retrieve the values using arithmetic operations). Thus, a threshold should be used in a general comparison. However, our exercises guarantee (and test cases) guarantee that no problem will occur because of this behavior.

On the other hand, the subtraction between two `double` values results in a `double` value, too, that cannot be returned from a comparison function having an `int` type. Thus, comparison operators and explicit `int` values must be used:

### Examples

1. Ascending order:

   ```c
    if (left->rating < right->rating)
    {
        return -1; // any negative value
    }

    if(left->rating > right->rating) {
        return 1; // any positive value
    }
   ```

1. Descending order:

   ```c
    if (left->rating > right->rating)
    {
        return -1; // any negative value
    }

    if(left->rating < right->rating) {
        return 1; // any positive value
    }
   ```

## Comparing `char[]` fields 

Function `strcmp()` has exactly the same signature as our comparison function; thus, it can be used for comparing two strings.

### Examples

1. Ascending order, version #1:

   ```c
   if (strcmp(left->name, right->name))
   {
      return strcmp(left->name, right->name);
   }
   ```

1. Ascending order, version #2:

   ```c
   int result = strcmp(left->name, right->name);
   if (result)
   {
      return result;
   }
   ```

1. Descending order, version #1:

   ```c
   if (strcmp(right->name, left->name))
   {
      return strcmp(right->name, left->name);
   }
   ```

1. Descending order, version #2:

   ```c
   int result = strcmp(right->name, left->name);
   if (result)
   {
      return result;
   }
   ```

1. Descending order, version #3:

   ```c
   int result = strcmp(left->name, right->name);
   if (result)
   {
      return - result;
   }
   ```