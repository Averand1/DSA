#include<iostream>
using namespace std;

int main()
{
    int A[11]={5,7,2,4,8,9,3,-1,6};
    int n = sizeof(A)/sizeof(A[0]);
    int i;
    int min = A[0];
    int max = A[0];
    for(i=1; i<n; i++)
    {
        if(A[i]<min) min=A[i];
        else if(A[i]>max) max=A[i];
    };
    printf("Min:%d, Max:%d\n", min, max);
};