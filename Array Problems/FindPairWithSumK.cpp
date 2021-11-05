#include<iostream>
using namespace std;
//Find pair with sum k (a+b=k)
int main()
{
    int A[11]={6,3,8,10,16,7,5,2,9,14};
    int n = sizeof(A)/sizeof(A[0]);
    int i, j, k=10; //we have to find two numbers who's sum is 10
    for(i=0;i<n-1;i++) //iterate i till it reaches the last 2nd element of the array
    {
        for(j=i+1; j<n; j++) //iterate j till last element of array
        {
            //Comparing the addition of A[i]+A[j]==k is 10 or not 
            if(A[i]+A[j]==k) printf("%d+%d=%d\n", A[i], A[j], k); 
        };
    };
};