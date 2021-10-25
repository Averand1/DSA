//Merging can only be done on a sorted array
// Time taken for merging will be Theta(m+n) M and N are the two sorted arrays merged
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
struct Array 
{
    int A[10];
    int size; 
    int length;
};

void Display(Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }

}

struct Array* Merge(Array *arr1, Array *arr2)
{
    int i, j, k;
    i=j=k=0;

    Array *arr3 =(struct Array*)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length)
    /*Remember that one element will always be left in either arr1 or arr2
    when the while loop condition becomes false*/
    {
        if(arr1->A[i]<arr2->A[j]) //Check if element is greater in 1st list than the 2nd
            arr3->A[k++] = arr1->A[i++]; //Value set to arr3[k]=arr1[i] then increment k and j
        else
            arr3->A[k++] = arr2->A[j++]; //Same thing
    }
    //to copy the remaining element from either arr1 or arr2 to arr3
    for(;i<arr1->length;i++) //
        arr3->A[k++] = arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = arr1->length+arr2->length; //length of array will be addition of arr1&2
    arr3->size=10;

    return arr3; //Can return arr3 from inside the structure cause we used pointer
}

int main()
{
    struct Array arr1={{2,9,21,28,35},10,5}; 
    struct Array arr2={{2,3,16,18,28},10,5}; 
    struct Array *arr3;
    arr3=Merge(&arr1,&arr2); 
    Display(*arr3);
  
    return 0;
}

