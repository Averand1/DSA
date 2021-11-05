#include<stdio.h>
#define N 11
int main()
{
    int A[N]={3,7,4,12,6,1,11,2,10};
    int l=1;
    int h=12;
    int n=10;
    int H[13]; // Consider the elements in this array to be all 0
    for(int i=0;i<n;i++)
    {   //for example
        H[A[i]]++; //Here if we find A[i] = 4, H[4]++ meaning the H[4]=1; 
    };
    for(int i=l;i<h;i++)
    { // i was not declared
        if(H[i]==0) // if the element in H[i] is still 0, we have found the missing element
        printf("%d ",i);
    };
return 0; 
};