#include<iostream>
#define N 11

int main() {
    int A[N]={7,2,9,7,4,9,8,2,7};
    int n = sizeof(A)/sizeof(A[0]), i, j;
    for(i=0; i<n-1; i++) //We'll compared i with j so we can set n-1 as j will go till n
    {
        int count=1; //Setting a count variable
        if(A[i]!=-1) 
        {
            for(j=i+1;j<n;j++) //Starting element j from i+1
            {
                if(A[i]==A[j]) //if both are equal
                {
                    count++;   //increase the count
                    A[j]=-1;    //Set A[j]=-1 which line 10 will use to skip the element
                };
            };
        };
        if(count>1) printf("%d appeared %d times\n", A[i], count);
    };
};