#include <stdio.h>

// Function prototype
void changeValue(int *ptr);

int main() {
    //Declaring an integer variable
    int num = 10;
    
    //Declaring a pointer to the integer
    int *pNum = &num; // Assigning address of num to pNum
    
    printf("Before modification: %d\n", num); // Output the original value
    
    // Calling the function to modify the value
    changeValue(pNum);
    
    printf("After modification: %d\n", num); // Output the modified value
    
    return 0;
}

// Modifying the value using the pointer
void changeValue(int *ptr) {
    // Dereferencing the pointer to access the value and modify it
    *ptr = 20; // Changing the value of num through the pointer pNum
}
