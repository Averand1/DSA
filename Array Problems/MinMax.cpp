#include<iostream>
using namespace std;

int main()
{
    int A[11]={5,7,2,4,8,9,3,-1,6};
    int n = sizeof(A)/sizeof(A[0]);
    int i;
    int min = A[0]; //Set both min and max to A[0]
    int max = A[0];
    for(i=1; i<n; i++) //As we have set min max to A[0] we can start with i = 1
    {
        if(A[i]<min) min=A[i]; //if A[i] is < min, we change min's vale to A[i] which was less than min
        else if(A[i]>max) max=A[i]; /* same for max, if A[i] is greater than the current max
                                        we set the max to new A[i];*/
    };
    printf("Min:%d, Max:%d\n", min, max);
};