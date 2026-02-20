//print address and value//

#include <stdio.h>

int main()
{
    int arr[2] = {500, 5000};
    int *p = arr;

    printf("Address = %p\n", p);
    printf("Value = %d\n", *p);

    return 0;
}
