#include<stdio.h>

//Bubble sort works by swapping the adjacent elements if they are in wrong order
// Ex: 14523 -> 14254 ->14235 - > 12435 -> 12345

//Will have to write a function that swaps element
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//A function to implement bubble sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for(i = 0; i<n-1; i++) //loop to access each array element
        for(j=0; j<n-i-1; j++) //loop to compare array element
            if(arr[j] > arr[j+1]) //compare two adjacent elements, try changing > to <
               swap(&arr[j], &arr[j+1]);

}

void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//Driver program to test above functions
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]); // Dividing size of whole arr by it's first element
    bubbleSort(arr, n);
    printf("Sorted array:  \n");
    printArray(arr, n);
    return 0;
}