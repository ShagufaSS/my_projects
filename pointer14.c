//print element using pointer

#include <stdio.h>

int main()
{
    int arr[3] = {11, 22, 33};   // array declaration
    int *ptr;                      // pointer declaration

    ptr = arr;
    ptr = arr+1;


    printf("First element = %d", *ptr);

    return 0;
}

