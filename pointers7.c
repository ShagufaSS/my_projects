#include <stdio.h>

int main()
{
    int arr[5] = {10, 25, 15, 40, 20};  // Step 1: declare and initialize array
    int *p;                             // Step 2: declare pointer
    int sum = 0;                        // Step 3: initialize sum
    int max;                            // Step 4: variable to store largest element
    int i;

    p = arr;                            // Step 5: pointer stores address of first element

    max = *p;                           // Step 6: assume first element is largest

    // Step 7: loop through array using pointer
    for(i = 0; i < 5; i++)
    {
        sum = sum + *(p + i);          // add each element to sum

        if(*(p + i) > max)             // check if current element is greater
        {
            max = *(p + i);            // update max value
        }
    }

    // Step 8: print results
    printf("Sum = %d\n", sum);
    printf("Largest element = %d\n", max);

    return 0;
}
