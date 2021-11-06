#include<iostream>
//for this example
/* In Bubble Sort we compare the the first element with the next and if the first element 
is larger than next(second) element we swap their position*/

void swap(int *x, int *y)  //swap function to change the elements at certain indexes
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Bubble(int A[], int n) //taking an array input and it's size
{
    int i, j, flag=0; //flag becomes 1 when an element is swapped if not it's 0
    for(i=0;i<n-1;i++) 
    {
        flag=0; //setting flag 0 everytime
        for(j=0; j<n-i-1; j++) //loop n-1-i as the no of elements to sort reduce after each iteration
        {
            if(A[j]<A[j+1]) //if current element is greater than the one ahead
            {
                swap(&A[j], &A[j+1]); //we swap it's position
                flag=1; //as we swapped the position, we set flag to 1
            };
        };
        if(flag==0) break; //if flag is 0, it means theres no swap
    };
};


int main()
{
    int A[] = {3,7,9,10,6,5,12,4,11,2}, n=10;
    Bubble(A,10);

    for(int i=0;i<10;i++)
        printf("%d ", A[i]);
    printf("\n");
    

    return 0;
}