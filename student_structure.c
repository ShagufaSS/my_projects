#include <stdio.h>

struct student_details {
    int student_roll_number;        // Roll number
    char student_name[20];      // Student name
    int student_total_marks;    // Marks obtained
    float student_percentage;   // Percentage
};

int main() {
    struct student_details stud[3];   // Array for 5 students
    int i;

    // Input details of students //
    for(i = 0; i < 3; i++) {
        printf("\nEnter student details %d\n", i+1);

        printf("student roll Number: ");
        scanf("%d", &stud[i].student_roll_number);

        printf("student Name: ");
        scanf("%s", &stud[i].student_name);

        printf("student_Total_Marks (out of 600): ");
        scanf("%d", &stud[i].student_total_marks);

        // Calculate percentage
        stud[i].student_percentage = (stud[i].student_total_marks / 600.0) * 100;
    }

    // Display details of students//
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i+1);
        printf("student Roll number      : %d\n", stud[i].student_roll_number);
        printf("student Name         : %s\n", stud[i].student_name);
        printf("student Total Marks  : %d\n", stud[i].student_total_marks);
        printf("student Percentage   : %f%%\n", stud[i].student_percentage);
    }

    return 0;
}