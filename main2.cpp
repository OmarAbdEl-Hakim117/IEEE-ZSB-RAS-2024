
//111111111111111111111111111111111111111:
/*
#include <stdio.h>

int main() {
    int i = 10;
    char c = 'A';
    long long ll = 10000000000LL;

    int *pl = &i;
    char *p2 = &c;
    long long *p3 = &ll;
    printf("pl points to address: %p..............>%d\n", (void *)pl,i);
    printf("p2 points to address: %p..............>%c\n", (void *)p2,c);
    printf("p3 points to address: %p.........>%d\n", (void *)p3,ll);


    // Increment pointers
    pl++;
    p2++;
    p3++;

    // Print results
 printf("pl points to address: %p..............>%d\n", (void *)pl,i);
    printf("p2 points to address: %p..............>%c\n", (void *)p2,c);
    printf("p3 points to address: %p.........>%d\n", (void *)p3,ll);

    return 0;
}

*/
/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//2222222222222222222222222222222222222222222222:

/*
#include <stdio.h>

int main() {
    // Define an integer variable containing HEX value of 3 bytes
    int hex_value = 0xABCDEF;

    // Define a pointer pointing to the integer variable
    int *ptr = &hex_value;

    // Perform the operations
    printf("Original value: 0x%X\n", *ptr);

    *ptr++;    // Operation 1: Post-increment
    printf("After *ptr++: 0x%X\n", *ptr);

    *++ptr;    // Operation 2: Pre-increment
    printf("After *++ptr: 0x%X\n", *ptr);

    ++*ptr;    // Operation 3: Increment the value pointed to
    printf("After ++*ptr: 0x%X\n", *ptr);

    return 0;
}
*/

////////////////////////////////////////////////////
///////////////////////////////////////////////////////
//3333333333333333333333333333333333333333333:


/*
#include <stdio.h>

// Function to increment an integer value
void increment(int *value) {
    (*value)++; // Increment the value pointed to by 'value'
}

int main() {
    int num = 5;

    // Create a pointer to the increment function
    void (*ptr)(int *) = &increment;

    printf("Before increment: %d\n", num);

    // Call the increment function using the pointer
    ptr(&num);

    printf("After increment: %d\n", num);

    return 0;
}
*/

//////////////////////////////////////////////
////////////////////////////////////////


//44444444444444444444444444444444444444444444:
/*
#include <stdio.h>

int main() {
    // Define an array of int values
    int arr[] = {10, 20, 30, 40, 50};

    // Define a pointer pointing to the array
    int *ptr = arr; // Pointer points to the first element of the array

    // Print all elements of the array using the pointer
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *ptr); // Print the value pointed to by 'ptr'
        ptr++; // Move the pointer to the next element
    }
    printf("\n");

    return 0;
}
*/

