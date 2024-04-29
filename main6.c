
//1111111111111111111111111111111111111111.allocating memory using malloc, calloc, and realloc:
///*
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory using malloc
    int* ptr1 = (int*)malloc(5 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation using malloc failed.\n");
    } else {
        printf("Memory allocation using malloc was successful.\n");
        // Print values
        printf("Values assigned using malloc:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", ptr1[i]);
        }
        printf("\n");
    }

    // Allocate memory using calloc
    int* ptr2 = (int*)calloc(5, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation using calloc failed.\n");
    } else {
        printf("Memory allocation using calloc was successful.\n");
        // Print values
        printf("Values assigned using calloc:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", ptr2[i]);
        }
        printf("\n");
    }

    // Reallocate memory using realloc
    ptr1 = (int*)realloc(ptr1, 10 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory reallocation using realloc failed.\n");
    } else {
        printf("Memory reallocation using realloc was successful.\n");
        // Print values after reallocation
        printf("Values assigned after reallocation:\n");
        for (int i = 0; i < 10; i++) {
            printf("%d ", ptr1[i]);
        }
        printf("\n");
    }

    // Free allocated memory
    free(ptr1);
    free(ptr2);

    return 0;
}


//*/
/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//2222222222222222222222222222222222222222222222:

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory using malloc
    int* ptr1 = (int*)malloc(5 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation using malloc failed.\n");
    } else {
        printf("Memory allocation using malloc was successful.\n");
        // Print values
        printf("Values assigned using malloc:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", ptr1[i]);
        }
        printf("\n");
    }

    // Allocate memory using calloc
    int* ptr2 = (int*)calloc(5, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation using calloc failed.\n");
    } else {
        printf("Memory allocation using calloc was successful.\n");
        // Print values
        printf("Values assigned using calloc:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", ptr2[i]);
        }
        printf("\n");
    }

    // Free memory allocated using malloc
    free(ptr1);
    printf("Memory allocated using malloc freed.\n");

    // Allocate memory for a larger space using malloc
    ptr1 = (int*)malloc(10 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation using malloc failed.\n");
    } else {
        printf("Memory allocation using malloc was successful.\n");
        // Print values
        printf("Values assigned using malloc after freeing previous space:\n");
        for (int i = 0; i < 10; i++) {
            printf("%d ", ptr1[i]);
        }
        printf("\n");
    }

    // Free allocated memory
    free(ptr1);
    free(ptr2);

    return 0;
}

*/

////////////////////////////////////////////////////
///////////////////////////////////////////////////////
//3333333333333333333333333333333333333:


/*
#include <stdio.h>
#include <string.h>

int main() {
    char name[100]; // Maximum length for the name
    int max_length;

    // Ask the user for the maximum length of the name
    printf("Enter the maximum length for the name: ");
    scanf("%d", &max_length);

    // Ensure the entered maximum length is within bounds
    if (max_length <= 0 || max_length >= 100) {
        printf("Invalid maximum length. Please enter a value between 1 and 99.\n");
        return 1; // Exit the program with an error
    }

    // Ask the user to input their name
    printf("Enter your name (maximum %d characters): ", max_length);
    scanf(" %[^\n]", name);

    // Print the entered name
    printf("You entered: %s\n", name);

    // Initialize variables to store the most repeated character and its frequency
    char most_repeated_char;
    int max_frequency = 0;

    // Create an array to store the frequency of each character
    int frequency[256] = {0};

    // Calculate the frequency of each character in the name
    for (int i = 0; i < strlen(name); i++) {
        char current_char = name[i];
        frequency[current_char]++;
        if (frequency[current_char] > max_frequency) {
            max_frequency = frequency[current_char];
            most_repeated_char = current_char;
        }
    }

    // Print the most repeated character and its frequency
    printf("Most repeated character: %c\n", most_repeated_char);
    printf("Frequency: %d\n", max_frequency);

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


//4444444444444444444444444444444444444444444444:
/*
#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    int time_in_seconds;

    // Ask the user to input the time
    printf("Enter the time in format [hh:mm:ss]: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    // Validate the entered time
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) {
        printf("Invalid time format. Please enter a valid time.\n");
        return 1; // Exit the program with an error
    }

    // Convert the time to seconds
    time_in_seconds = hours * 3600 + minutes * 60 + seconds;

    // Print the time in seconds
    printf("Time in seconds: %d\n", time_in_seconds);

    // Convert the time back to hours, minutes, and seconds
    hours = time_in_seconds / 3600;
    time_in_seconds %= 3600;
    minutes = time_in_seconds / 60;
    seconds = time_in_seconds % 60;

    // Print the time again
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}


*/
///////////////////////////////////////////////////////////////
//66666666666666666666666666666666666666666666666:
/*
#include <stdio.h>
#include <string.h>

#define STOP_CODE "!!"  // Define the stop code

int main() {
    char input[100];    // Buffer to store user input
    char unique[100];   // Buffer to store unique characters
    int unique_index = 0; // Index for the unique character buffer

    printf("Enter a string (enter '!!' to stop): ");

    while (1) {
        // Get user input
        scanf("%s", input);

        // Check if the input matches the stop code
        if (strcmp(input, STOP_CODE) == 0) {
            printf("Stop code detected. Exiting...\n");
            break;
        }

        // Process the input string to find unique characters
        int len = strlen(input);
        for (int i = 0; i < len; i++) {
            char current_char = input[i];
            int is_unique = 1;

            // Check if the current character is already in the unique list
            for (int j = 0; j < unique_index; j++) {
                if (unique[j] == current_char) {
                    is_unique = 0;
                    break;
                }
            }

            // If the character is unique, add it to the unique list
            if (is_unique) {
                unique[unique_index++] = current_char;
            }
        }

        // Null-terminate the unique character list
        unique[unique_index] = '\0';

        // Print the unique characters
        printf("Unique characters: %s\n", unique);

        // Reset the unique character index for the next iteration
        unique_index = 0;

        // Prompt for the next input
        printf("Enter a string (enter '!!' to stop): ");
    }

    return 0;
}


*/
//77777777777777777777777777777777777777777777777
/*
#include <stdio.h>

// Macro definition for sizeof
#define my_sizeof(type) (char*)(&type+1)-(char*)(&type)

int main() {
    int x = 5;
    printf("Size of int: %ld\n", my_sizeof(x));
    return 0;
}



#include <stdio.h>

// Inline function for sizeof
inline size_t my_sizeof(int type) {
    return (char*)(&type+1)-(char*)(&type);
}

int main() {
    int x = 5;
    printf("Size of int: %ld\n", my_sizeof(x));
    return 0;
}
*/
/*

Macros are preprocessor directives, meaning they are processed before the compilation stage. They essentially perform a text substitution, replacing the macro name with its definition.
Macros don't have type checking, and they may lead to unexpected behavior if not used carefully.
Inline functions, on the other hand, are actual functions that are expanded by the compiler at the place where they are called.
They provide type checking, scoping, and other benefits of functions. Inline functions are more structured and safer than macros, but they may lead to larger code size due to function expansion.
Best Use Cases:
Macros are often used for simple, short tasks, or when performance is critical.
They are suitable for tasks that require simple text substitution and don't rely on type safety or scoping.
Inline functions are preferable for more complex tasks or when type safety, scoping, or readability is important.
They provide the benefits of functions while avoiding the pitfalls of macros, making the code more maintainable and easier to debug.


*/





//8888888888888888888888888888888888888888888888888888
/*
#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end of the linked list
void insertNode(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
}

// Function to delete the first occurrence of a node with given key from linked list
void deleteNode(struct Node** head_ref, int key) {
    struct Node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

// Function to print the linked list
void printList(struct Node* node) {
    if (node == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    char choice;
    int value;

    while (1) {
        printf("Enter '+': Add node, '-': Delete node, 'p': Print list, 'x': Exit: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '+':
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertNode(&head, value);
                break;
            case '-':
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;
            case 'p':
                printList(head);
                break;
            case 'x':
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
*/
