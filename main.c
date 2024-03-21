
//counting the total number of duplicate elements in an array:
/*#include <stdio.h>

int main() {
    int  n, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
   int  arr[n], freq[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // initialize frequency array
    }

    for (int i = 0; i < n; i++) {
        int freqCount = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freqCount++;
                freq[j] = 0; // mark duplicate elements in the frequency array
            }
        }
        if (freq[i] != 0) {
            freq[i] = freqCount;
        }
    }

    printf("duplicate elements are:\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("%d with frequency of: %d\n", arr[i], freq[i]);
            count++;
        }
    }

    printf("The number duplicate elements: %d\n", count);

    return 0;
}*/


/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//printing all unique elements in an array:

/*
#include <stdio.h>
void printuniquelements(int arr[], int size) {
    printf("Unique elements in the array: ");
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j])
                break;
        }
        if (i == j)
            printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int size;
    printf("Enter your array's number of element: ");
    scanf("%d",&size);
 int arr[size];
    printf("Now enter your array's elements:\n");
         for (int i = 0; i < size; i++)
            scanf("%d",&arr[i]);

    printuniquelements(arr, size);

    return 0;
}
*/

////////////////////////////////////////////////////
///////////////////////////////////////////////////////
//defining a function to count the frequency of each element in an array:


/*
#include <stdio.h>
void countfrequency(int arr[], int size) {
     for (int i = 0; i < size; i++) {
        int count = 1;
        if (arr[i] != -1) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // Mark as counted
                }
            }
            printf("%d with frequency of: %d\n", arr[i], count);
        }
    }
}

int main() {
    int size;
    printf("Enter your array's number of element: ");
    scanf("%d",&size);
 int arr[size];
    printf("Now enter your array's elements:\n");
         for (int i = 0; i < size; i++)
            scanf("%d",&arr[i]);
    countfrequency(arr, size);

    return 0;
}
*/

//////////////////////////////////////////////
////////////////////////////////////////


//adding numbers using call by reference:
/*
#include <stdio.h>
void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int num1 = 5, num2 = 10, sum;

    addNumbers(&num1, &num2, &sum);

    printf("Sum: %d\n", sum);

    return 0;
}

*/


///////////////////////////////////
//////////////////////////////////////////////

//POINTERS:

/*
#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;
    int *p, *q, *r;

    p = &x;
    q = &y;
    r = &z;

    printf("VALUES:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("*p: %d\n", *p);
    printf("*q: %d\n", *q);
    printf("*r: %d\n", *r);
    printf("p: %p\n", (void*)p);
    printf("q: %p\n", (void*)q);
    printf("r: %p\n", (void*)r);

    printf("\n swapping pointers.\n");

    int *temp = r;
    r = p;
    p = q;
    q = temp;

    printf("\n VALUES AFTER SWAPPING:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("*p: %d\n", *p);
    printf("*q: %d\n", *q);
    printf("*r: %d\n", *r);
    printf("p: %p\n", (void*)p);
    printf("q: %p\n", (void*)q);
    printf("r: %p\n", (void*)r);

    return 0;
}

*///


///////////////////////////////////////
/////////////////////////////////////////////////////
//input a string and print it:
/*
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("The entered string is: %s\n", str);

    return 0;
}
*/

/////////////////////////////////////////////////
////////////////////////////////////////////////
////separate individual characters from a string:
/*
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Individual characters from the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}
*/



/////////////////////////////////////////
///////////////////////////////////////////////////
// compare two strings:
/*
#include <stdio.h>

int compareStri/ngs(char str1[], char str2[]) {
    int i = 0;/
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // strings are not equal
        }
        i++;
    }
    return 1; // strings are equal
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
*/


///////////////////////////////////////////////
/////////////////////////////////////////////////////////
//copy one string to another string:


/*
#include <stdio.h>

void copy(char src[], char dest[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // add null terminator to the end of the destination string
}

int main() {
    char source[100], destination[100];
    printf("Enter a string: ");
    scanf("%s", source);
    copy(source, destination);
    printf("Copied string: %s\n", destination);
    return 0;
}
*/
