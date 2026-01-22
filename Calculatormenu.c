#include <stdio.h>

int main()
{
    int choice, a, b, result;       //choice—menu option selected by the user.  a, b—the two input numbers.  result—stores the outcome of the chosen operation//
    char ch;        //Declare character: ch will store the user’s decision to continue (y) or stop (n)//

    do
    {
        printf("\nCalculator\n");
        printf("1.Add  2.Sub  3.Mul  4.Div  5.Mod\n");      // Menu options//
        printf("Enter choice: ");       //Asks the user to select an operation//
        scanf("%d", &choice);

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);     //Read inputs: Stores the two integers in a and b//

        switch (choice)
        {
            case 1:
                result = a + b;
                printf("Result = %d\n", result);
                break;

            case 2:
                result = a - b;
                printf("Result = %d\n", result);
                break;

            case 3:
                result = a * b;
                printf("Result = %d\n", result);
                break;

            case 4:
                if (b != 0)     //Checks for division by zero (invalid)//
                {
                    result = a / b;
                    printf("Result = %d\n", result);
                }
                else
                {
                    printf("Division by zero is not allowed\n");
                }
                break;

            case 5:
                if (b != 0)
                {
                    result = a % b;
                    printf("Result = %d\n", result);
                }
                else
                {
                    printf("Modulo by zero is not allowed\n");
                }
                break;

            default:
                printf("Wrong choice\n");
        }

        printf("Continue? (y/n): ");
        scanf(" %c", &ch);

    } while (ch == 'y' || ch == 'Y');

    return 0;
}