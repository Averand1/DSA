#include<iostream>
#define N 11
using namespace std;
//Find pair with sum k (a+b=k) using hash table
int main()
{
    int A[N]={6,3,8,10,16,7,5,2,9,14};
    int l=10;
    int n = sizeof(A)/sizeof(A[0]);
    int H[15], k=sizeof(H)/sizeof(H[0]);
    int i, j; //we have to find two numbers who's sum is 10
    for(i=0; i<n; i++)
    {
        if(H[l-A[i]]!=0) 
        {
            printf("%d+%d=%d\n", A[i],l-A[i],l);
        };
        H[A[i]]++;
    };
};