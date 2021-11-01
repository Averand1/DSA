    #include<stdio.h>
    #define N 12 // size should be 12
    int main()
    {
    int A[N]= {1,2,3,4,5,6,8,9,10,11,12};
    int sum=0; // declaration missing
    int n = sizeof(A)/sizeof(A[0]); 
    int s;
    for(int i=0; i<11; i++)
    {
    sum=sum+A[i];
    };
    s=n*(n+1)/2;
    printf("The number is %d ",s-sum);
    return 0;
    }