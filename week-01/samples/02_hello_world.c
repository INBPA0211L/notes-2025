#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    // new line is important!
    printf("Hello, World!\n");

    /*
    This is not Python :(
                     ____
                    / . .\
                    \  ---<
                    \  /
          __________/ /
       -=:___________/
    */

    printf("%d\n", MIN(5, 2));
    printf("%d\n", MAX(5, 2));

    return SUCCESS;
    // return EXIT_SUCCESS;
}
