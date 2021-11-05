#include<iostream>
using namespace std; 
#define N 11
int main() {
    int A[N]={3,6,8,8,10,12,14,14,14,20,20};
    int n = sizeof(A)/sizeof(A[0]), i; //No of elements is 10
    int lastDuplicate = 0;
    for(i=0;i<n;i++) //for finding what elements appear multiple times in the array
    {
        //Checking if A[i] is == to Lastduplicate
        if(A[i]==A[i+1] && A[i]!=lastDuplicate)
        {
            printf("%d ", A[i]);
            lastDuplicate = A[i]; //Setting the new duplicate as lastDuplicate
        };

    };
    //For counting how many times a number appeared
    for(i=0;i<n-1;i++) //going till n-1 as there is only one element ahead
    {
        if(A[i]==A[i+1])
        {
            int j = i+1; //starting j from i+1
            while(A[j]==A[i]) //till they are both equal
            j++; //keep increasing j by one
            //Index diff between j&i will be no of times elements were repeated
            printf("\n%d is appearing %d times", A[i], j-i);
            i=j-1; //extra checks
        };
    };
    return 0;

};