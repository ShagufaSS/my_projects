#include <stdio.h>

int main()
{
    char student_name[5][20];       // used to store details ----> Declare names array //
    int student_roll_number[5], student_marks[5];       // Declare roll numbers and marks arrays: Each holds 5 integers—one per student//
    int choice, i;      //choice stores menu option enterd by user, i = loop couter//
    int data_entered = 0;       // Flag variable ---> Tracks whether student data has been entered (0 = no, 1 = yes) //
    do
    {
        printf("STUDENT MENU\n");       // Displays menu and takes user input //
        printf("1. Enter Student Details\n");
        printf("2. Display Student Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);       //Stores the selected option in choice//

        switch (choice)     // choice condition //
        {
        case 1:     // Executes when user enters 1. //
            for (i = 0; i < 5; i++)     // loop run 5 times //
            {
                printf("\nStudent %d\n", i + 1);        // Displays student number -->Shows which student you’re entering (1‑based index)//

                printf("Enter Name: ");
                scanf("%s", student_name[i]);       // store name //

                printf("Enter Roll Number: ");
                scanf("%d", &student_roll_number[i]);       // store roll number //

                printf("Enter Marks: ");
                scanf("%d", &student_marks[i]);     // store marks //
            }
            data_entered = 1;       //* data is competed* //
            break;      // end case 1. //

        case 2:
        if (data_entered == 0)      //checks condition whether data is enterd or not//
        {
            printf("no data found\n");      //Display message if no data enterd//
        }
        else
        {
            printf("STUDENT RESULTS\n");        //Prints heading//

            for (i = 0; i < 5; i++)
            {
                printf("\nName: %s", student_name[i]);
                printf("\nRoll No: %d", student_roll_number[i]);
                printf("\nMarks: %d", student_marks[i]);

                /* Range-based result */
                if (student_marks[i] >= 75 && student_marks[i] <= 100)
                    printf("\nResult: Distinction\n");
                else if (student_marks[i] >= 60 && student_marks[i] < 75)
                    printf("\nResult: First Class\n");
                else if (student_marks[i] >= 35 && student_marks[i] < 60)
                    printf("\nResult: Pass\n");
                else
                    printf("\nResult: Fail\n");
            }
            break;

        }

        case 3:
            printf("\nProgram Excuted Successfully.\n");
            break;

        default:
            printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while (choice != 3);      //menu repeats until user selects 3//

    return 0;
}