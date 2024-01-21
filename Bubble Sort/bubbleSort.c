#include <stdio.h>

// Function prototypes
void bubbleSort(int myArray[], int size);
void displaySortedArray(int myArray[], int size);

int size;

int main(){
    // Initialize an array with 10 integers
    int myArray[] = {2, 5, 3, 1, 4, 9, 6, 7, 10, 8};

    // Calculate the size of the array
    size = sizeof(myArray) / sizeof(myArray[0]);

    // Sort the array using Bubble Sort algorithm
    bubbleSort(myArray, size);

    // Display the sorted array
    displaySortedArray(myArray, size);

    return 0;
}

// Function to perform Bubble Sort on an array
void bubbleSort(int myArray[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            // Swap elements if they are in the wrong order
            if(myArray[j] > myArray[j + 1]){
                int temp = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j + 1] = temp;
            }
        }
    }
}

// Function to display the elements of a sorted array
void displaySortedArray(int myArray[], int size){
    // Print each element of the sorted array
    for(int k = 0; k < size; k++){
        printf("%d ", myArray[k]);
    }
}
