//111111111111111111111111111111111111111:
/*
#include <stdio.h>

// Function prototypes
float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

// Function pointer type
typedef float (*operation)(float, float);

int main() {
    float num1, num2, result;
    int choice;

    // Function pointer
    operation func_ptr;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            func_ptr = addition;
            break;
        case 2:
            func_ptr = subtraction;
            break;
        case 3:
            func_ptr = multiplication;
            break;
        case 4:
            func_ptr = division;
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Call the appropriate function using function pointer
    result = func_ptr(num1, num2);

    // Display the result
    printf("Result: %.2f\n", result);

    return 0;
}

// Addition function
float addition(float a, float b) {
    return a + b;
}

// Subtraction function
float subtraction(float a, float b) {
    return a - b;
}

// Multiplication function
float multiplication(float a, float b) {
    return a * b;
}

// Division function
float division(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error! Division by zero\n");
        return 0;
    }
}

*/
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

//3333333333333333333333333333333333333333333333333333333333333333333333333333333333
/*
In berif, normal if-else statements control the flow of execution at runtime based on runtime conditions,
while preprocessor directives control the inclusion or exclusion of code sections at compile time based on compile-time conditions.
*/
