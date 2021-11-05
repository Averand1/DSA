#include<iostream>
#include<vector>
using namespace std; 
#define N 11 //Defined N as 11
int main() {
    int A[N]={3,6,8,8,10,12,14,14,14,20,20};
    int H[30] = {0}, k = sizeof(H)/sizeof(H[0]); //No of elements in H
    int n = sizeof(A)/sizeof(A[0]), i; //No of elements in A
    for(i=0;i<n;i++)
    {
        // 8 is on index 2 and 3
        H[A[i]]++; //H[8] is increased by 2 since 8 appears two times
    };
    for(i=0; i<=k; i++)
    {
        /*if any element appears more than one time, tell me what element
        and how many times it appeared */ 
        if(H[i]>1) printf("%d appearing %d times \n", i, H[i]); 
    };
};