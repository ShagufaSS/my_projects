//reverse array using pointer//

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};  // Step 1: declare array
    int *start, *end, temp;             // Step 2: declare pointers and temp
    int i;

    start = arr;        // Step 3: pointer to first element
    end = arr + 4;      // Step 4: pointer to last element

    while(start < end)  // Step 5: loop until pointers meet
    {
        temp = *start;  // store first value
        *start = *end;  // assign last value to first
        *end = temp;    // assign first value to last

        start++;        // move forward
        end--;          // move backward
    }

    printf("Reversed array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);  // Step 6: print reversed array
    }

    return 0;
}
