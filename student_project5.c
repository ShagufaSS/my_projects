#include <stdio.h>
#include <string.h>     //Used for string handling Needed for strcpy() (copying PASS / FAIL)//


/* ---------- STRUCTURE ---------- */
struct student {
    char student_name[3][20];
    int roll_number;
    int total_marks;
    char final_result[10];   // PASS or FAIL
    char grade;
};

/* ---------- FUNCTION 1 ----------
   without return type, without arguments */
void showMenu() {
    printf("\n===== STUDENT MENU =====\n");
    printf("1. Enter Student Details\n");
    printf("2. Display Student Details\n");
    printf("3. Exit\n");
}

/* ---------- FUNCTION 2 ----------
   with Return type, without arguments */
int totalStudents() {       //return total number of students//
    return 3;
}

/* ---------- FUNCTION 3 ----------
   with Return type, With arguments */
char calculateGrade(int total_marks) {      // take marks as intput return grade char//
    if (total_marks >= 80)      //Logic used//
        return 'A';
    else if (total_marks >= 60)
        return 'B';
    else if (total_marks >= 35)
        return 'C';
    else
        return 'F';
}

/* ---------- FUNCTION 4 ----------
   without return type, With arguments */
void enterStudentDetails(struct student s[], int n) {       
    int i;
    /*n stores number of students,
    void means this function does NOT return any value
    i---> is a loop variable used to access each student*/

    for (i = 0; i < 3; i++) {
        
        printf("\nStudent %d\n", i + 1);
        
//=========STUDENT DTAT ENTRY===========//

        printf("Enter Name: ");
        scanf("%s", s[i].student_name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_number);

        printf("Enter Marks: ");
        scanf("%d", &s[i].total_marks);

        // PASS / FAIL RESULT//
        if (s[i].total_marks >= 35)
            strcpy(s[i].final_result, "PASS");
        else
            strcpy(s[i].final_result, "FAIL");

        // Grade 
        s[i].grade = calculateGrade(s[i].total_marks);
    }
}

/* ---------- DISPLAY FUNCTION ---------- */

void displayStudentDetails(struct student s[], int n) {
    int i;

    printf("\n----- STUDENT DETAILS -----\n");

    for (i = 0; i < 3; i++) {
        printf("\nName   : %s", s[i].student_name);
        printf("\nRoll   : %d", s[i].roll_number);
        printf("\nMarks  : %d", s[i].total_marks);
        printf("\nResult : %s", s[i].final_result);
        printf("\nGrade  : %c", s[i].grade);
    }
}

/* ---------- MAIN FUNCTION ---------- */
int main() {
    struct student s[3];
    int choice;     //chioce--->menu selection//
    int dataEntered = 0;        //checks whether data is enterd or not//

    int n = totalStudents();

    do {        //excutes menu at lest once//
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);       //reads user choice//

        switch (choice) {
            case 1:
                enterStudentDetails(s, n);      //Calls input function Sets flag to confirm data entered//
                dataEntered = 1;        //1--->student data enterd//
                break;

            case 2:
                if (dataEntered == 0)       //0--->No student data enterd//
                    printf("\n NO data found please enter data!\n");
                else
                    displayStudentDetails(s, n);
                break;      //stops switch//

            case 3:
                printf("\nThank you! Program ended.\n");
                break;

            default:
                printf("\nInvalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
