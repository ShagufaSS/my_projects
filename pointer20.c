#include <stdio.h>

int main()
{
    // Declare and initialize array
    int arr[3] = {10, 20, 30};

    // Pointer to first element
    int *p1 = arr;

    // Pointer to whole array
    int (*p2)[3] = &arr;

    // Print values using pointer to first element
    printf("Using pointer to first element:\n");
    printf("First value = %d\n", *p1);
    printf("Second value = %d\n", *(p1 + 1));
    printf("Third value = %d\n", *(p1 + 2));

    printf("\n");

    // Print values using pointer to whole array
    printf("Using pointer to whole array:\n");
    printf("First value = %d\n", (*p2)[0]);
    printf("Second value = %d\n", (*p2)[1]);
    printf("Third value = %d\n", (*p2)[2]);

    printf("\n");

    // Modify value using pointer to whole array
    (*p2)[0] = 100;

    printf("After modification:\n");
    printf("arr[0] = %d\n", arr[0]);

    return 0;
}
