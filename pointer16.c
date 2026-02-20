//modify array//s

#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    int *p = arr+1;

    *p = 200;

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);

    return 0;
}
