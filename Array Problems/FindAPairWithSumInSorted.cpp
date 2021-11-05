#include<iostream>
using namespace std;
#define N 11
//Find pair With Sum K for Sorted Array
int main()
{
    int A[11]={1,3,4,5,6,8,9,10,12,14,16};  
    int n = sizeof(A)/sizeof(A[0]);
    int i=0, j=n-1, k=10;
    //while(i<j) //till i < j
    for(i=0,j=n-1; i<j;) //starting i from 0 and j from n-1
    {
        if(A[i]+A[j]==k) //if A[i]+A[j]==10
        {
            printf("%d+%d=%d\n", A[i], A[j], k);
            i++; //increment i when A[i]+A[j]==k
            j--; // incremenet j when A[i]+A[j]==k
        }
        else if(A[i]+A[j] < k) //when A[i]+A[j] is less than our sum
            i++; //we increment i
        else
            j--; //else if K is greater than our sum we decrement j
    };

};