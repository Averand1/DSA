#include<stdio.h>
#define N 11
int main()
{
    int A[N]={3,7,4,12,6,1,11,2,10};
    int l=1;
    int h=12;
    int n=10;
    int H[13]; // [13] was missing
    for(int i=0;i<n;i++)
    {
        H[A[i]]++;
    };
    for(int i=l;i<h;i++)
    { // i was not declared
        if(H[i]==0) // [ ] should be used
        printf("%d ",i);
    };
return 0; 
};