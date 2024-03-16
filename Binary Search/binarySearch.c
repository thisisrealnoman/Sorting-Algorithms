#include <stdio.h>
#include <math.h>

int binarySearch(int myArray[], int target, int low, int high)
{
    while(low <= high)
    {
        //int mid = low + (high - low) / 2;

        int mid = floor((high + low)/2);

        if(myArray[mid] == target)
        {
            return mid;
        }
        else if(myArray[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int myArray[] = {3, 4, 5, 6, 7, 8, 9};
    int sizeOfMyArray = sizeof(myArray) / sizeof(myArray[0]);
    int target = 9;
    int result = binarySearch(myArray, target, 0, sizeOfMyArray - 1);

    if(result == -1)
    {
        printf("Element is not found!");
    }
    else
    {
        printf("Element is found at index %d", result);
    }
    return 0;
}
