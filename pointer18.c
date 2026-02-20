//print address and value//

#include <stdio.h>

int main()
{
    int arr[3] = {50, 60, 70};
    int *p = arr;

    printf("Address of first element = %p\n", p);
    printf("Value of first element = %d\n", *p);

    printf("Address of second element = %p\n", p+1);
    printf("Value of second element = %d\n", *(p+1));

    printf("Address of second element = %p\n", p+2);
    printf("Value of second element = %d\n", *(p+2));

    return 0;
}
