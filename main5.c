
//1111111111111111111111111111111111111111. Struct student_info and Printing Function:
///*
#include <stdio.h>
#include <string.h>

// Define a struct for student information
struct student_info {
    unsigned int roll_number : 4;  // 4-bit roll number
    unsigned int age : 8;          // 8-bit age
    unsigned int marks : 3;        // 3-bit marks

    // Bit-fields for name and address (strings)
    char address[32];              // Max 32-bit address
    char name[16];                 // Max 16-bit name
};

// Function to print student information
void print_student_info(struct student_info student) {
    printf("Roll Number: %u\n", student.roll_number);
    printf("Age: %u\n", student.age);
    printf("Marks: %u\n", student.marks);
    printf("Address: %s\n", student.address);
    printf("Name: %s\n", student.name);
}

int main() {
    // Create an array of student_info structs for 15 students
    struct student_info students[15];

    // Assuming you populate the students array with data here...

    // Print the information of each student
    for (int i = 0; i < 15; i++) {
        printf("Student %d:\n", i + 1);
        print_student_info(students[i]);
        printf("\n");
    }

    // Calculate and print the total size of the struct
    printf("Size of student_info struct: %zu bytes\n", sizeof(struct student_info));

    return 0;
}


//*/
/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//2222222222222222222222222222222222222222222222:

/*
#include <stdio.h>

// Function-like macros for arithmetic operations
#define ADDITION(x, y) ((x) + (y))
#define SUBTRACTION(x, y) ((x) - (y))
#define MULTIPLICATION(x, y) ((x) * (y))
#define DIVISION(x, y) ((y) != 0 ? (x) / (y) : 0)

int main() {
    float num1, num2, result;
    int choice;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

#ifdef USE_IF_ELSE
    if (choice == 1)
        result = ADDITION(num1, num2);
    else if (choice == 2)
        result = SUBTRACTION(num1, num2);
    else if (choice == 3)
        result = MULTIPLICATION(num1, num2);
    else if (choice == 4)
        result = DIVISION(num1, num2);
    else {
        printf("Invalid choice\n");
        return 1;
    }
#else
    switch (choice) {
        case 1:
            result = ADDITION(num1, num2);
            break;
        case 2:
            result = SUBTRACTION(num1, num2);
            break;
        case 3:
            result = MULTIPLICATION(num1, num2);
            break;
        case 4:
            result = DIVISION(num1, num2);
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }
#endif

    printf("Result: %.2f\n", result);

    return 0;
}

*/

////////////////////////////////////////////////////
///////////////////////////////////////////////////////
//3333333. Enum for Arithmetic Operations and Calculator:


/*
#include <stdio.h>

// Define an enum for arithmetic operations
enum ArithmeticOperation {
    ADD = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE = '/',
    BITWISE_AND = '&',
    BITWISE_OR = '|',
    BITWISE_NOT = '!'
};

// Function to perform arithmetic operations
float calculate(float operand1, float operand2, enum ArithmeticOperation operation) {
    switch (operation) {
        case ADD:
            return operand1 + operand2;
        case SUBTRACT:
            return operand1 - operand2;
        case MULTIPLY:
            return operand1 * operand2;
        case DIVIDE:
            if (operand2 != 0) {
                return operand1 / operand2;
            } else {
                printf("Error: Division by zero\n");
                return 0;
            }
        case BITWISE_AND:
            return (int)operand1 & (int)operand2;
        case BITWISE_OR:
            return (int)operand1 | (int)operand2;
        case BITWISE_NOT:
            return ~(int)operand1;
        default:
            printf("Error: Invalid operation\n");
            return 0;
    }
}

int main() {
    float operand1, operand2;
    char operation_char;

    // Input operand1, operand2, and operation
    printf("Enter operand1, operand2, and operation (+, -, *, /, &, |, !): ");
    scanf("%f %f %c", &operand1, &operand2, &operation_char);

    // Convert operation character to enum value
    enum ArithmeticOperation operation = (enum ArithmeticOperation)operation_char;

    // Perform the calculation
    float result = calculate(operand1, operand2, operation);

    // Display the result
    printf("Result: %.2f\n", result);

    return 0;
}

*/
 /*
The size of the enum depends on the underlying data type used to represent it. 
By default, enums are represented as integers (int), so each member of the enum will have the size of an integer.
Adding extra members to the enum will not change its size, as each member occupies the same amount of memory.
 */
//////////////////////////////////////////////
////////////////////////////////////////


//4444444444. Sorting Functions with Macros:
/*
#include <stdio.h>

// Macro to swap two values
#define SWAP(a, b) { typeof(a) temp = a; a = b; b = temp; }

// Function to sort values in ascending order
void sort_asc(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                SWAP(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to sort values in descending order
void sort_desc(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                SWAP(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort in ascending order
    sort_asc(arr, n);
    printf("Ascending Order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort in descending order
    sort_desc(arr, n);
    printf("Descending Order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

*/
///////////////////////////////////////////////////////////////
//6.Macro-like Functions for Addition and Subtraction:
/*
#include <stdio.h>

// Macro-like function for addition
#define ADD(a, b) ((a) + (b))

// Macro-like function for subtraction
#define SUBTRACT(a, b) ((a) - (b))

int main() {
    int num1 = 10, num2 = 5;

    // Perform addition using macro-like function
    int sum = ADD(num1, num2);
    printf("Sum: %d\n", sum);

    // Perform subtraction using macro-like function
    int diff = SUBTRACT(num1, num2);
    printf("Difference: %d\n", diff);

    return 0;
}

*/
