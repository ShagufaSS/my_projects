//print all the elements using pointer//

#include <stdio.h>

int main()
{
    int arr[4] = {2, 4, 6, 8};      //Declares an integer array of size 4//
    int *p = arr;       //Declares pointer to integer//     //Pointer stores address of first element//

    printf("%d\n", *p);
    printf("%d\n", *(p+1));     //p+1 moves pointer to next integer location//
    printf("%d\n", *(p+2));
    printf("%d\n", *(p+3));

    return 0;
}
