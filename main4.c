//first task 
/*
#include <stdio.h>

// Define a struct to store student information
struct student_info {
    int roll_number;
    char name[50];
    int age;
    char address[100];
    float marks;
};

// Function to print student information and count students with marks less than 12
int print_student_info(struct student_info students[], int num_students) {
    int count_low_marks = 0;
    printf("Student Information:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
        printf("Marks: %.2f\n", students[i].marks);
        if (students[i].marks < 12.0) {
            count_low_marks++;
        }
    }
    return count_low_marks;
}

int main() {
    struct student_info students[15] = {
        {1, "John", 20, "123 Main St", 15.5},
        // Add information for remaining students here
    };

    int count_low_marks = print_student_info(students, 15);
    printf("Number of students with marks less than 12: %d\n", count_low_marks);

    return 0;
}
*/
////////second compare two dates
/*
#include <stdio.h>
#include <string.h>

// Define a struct to store date information
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    // Define two Date objects to store user-entered dates
    struct Date date1, date2;

    // Input first date
    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input second date
    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare dates
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
}
*/
///Third  
/*
#include <stdio.h>

// Define a struct to store name and age
struct info {
    char name[50];
    int age;
};

int main() {
    // Define an object of type info
    struct info person = {"John", 25};

    // Define a pointer to info and make it point to the object
    struct info *ptr = &person;

    // Print name and age using the pointer
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    return 0;
}
*/
//forth 
/*
#include <stdio.h>

// Define a struct to store test information
struct test {
    int id;
    char name[50];
    char class_id;
};

int main() {
    // Print the size of the struct
    printf("Size of struct test: %lu bytes\n", sizeof(struct test));

    // Reorder the definition of the struct to change the size
    struct test_reorder {
        char name[50];
        int id;
        char class_id;
    };

    // Print the size of the reordered struct
    printf("Size of struct test_reorder: %lu bytes\n", sizeof(struct test_reorder));

    return 0;
}
*/
