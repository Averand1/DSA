    #include<stdio.h>
    #define N 12 
    int main()
    {
    int A[N]= {1,2,3,4,5,6,8,9,10,11,12};
    int sum=0; //setting sum to 0
    int n = sizeof(A)/sizeof(A[0]); 
    int s;
    for(int i=0; i<11; i++) //terating till last element
    {
    sum=sum+A[i]; //adding A[i] to sum till the loop ends
    };
    s=n*(n+1)/2;  // 1 + 2 + .. + n = n(n+1)/2 [no number is missing element here]
    printf("The number is %d ",s-sum); //difference S-sum is the missing element
    return 0;
    }