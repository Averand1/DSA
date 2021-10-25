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
    
    {
        if(arr1->A[i]<arr2->A[j]) //
            arr3->A[k++] = arr1->A[i++];    
        else
            arr3->A[k++] = arr2->A[j++]; 
    }

    for(;i<arr1->length;i++) //
        arr3->A[k++] = arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = arr1->length+arr2->length; 
    arr3->size=10;

    return arr3; 
}

struct Array* Union(Array *arr1, Array *arr2)
{
    int i, j, k;
    i=j=k=0;

    Array *arr3 =(struct Array*)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length)
    
    {
        if(arr1->A[i]<arr2->A[j]) //
            arr3->A[k++] = arr1->A[i++];    
        else if(arr2->A[j]<arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }

    for(;i<arr1->length;i++) //
        arr3->A[k++] = arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = k; 
    arr3->size=10;

    return arr3; 
}

struct Array* Intersection(Array *arr1, Array *arr2)
{
    int i, j, k;
    i=j=k=0;

    Array *arr3 =(struct Array*)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length)
    
    {
        if(arr1->A[i]<arr2->A[j]) //
            i++;   
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else if(arr1->A[i]==arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }

    arr3->length = k; 
    arr3->size=10;

    return arr3; 
}


struct Array* Difference(Array *arr1, Array *arr2)
{
    int i, j, k;
    i=j=k=0;

    Array *arr3 =(struct Array*)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length)
    //Only have to elements from the arr1 array
    {
        if(arr1->A[i]<arr2->A[j]) //
            arr3->A[k++] = arr1->A[i++];    
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else
        {
            //Incremement both i and j when they are equal
            i++;
            j++;
        }
    }

    for(;i<arr1->length;i++) //
        arr3->A[k++] = arr1->A[i];
    //Not for arr2 cause we are finding the difference of the arr1 Array
    arr3->length = k; 
    arr3->size=10;

    return arr3; 
}
int main()
{
    struct Array arr1={{2,6,10,15,25},10,5}; 
    struct Array arr2={{3,6,7,15,20},10,5}; 
    struct Array *arr3;
    arr3=Difference(&arr1,&arr2); 
    Display(*arr3);
  
    return 0;
}
