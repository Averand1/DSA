#include<iostream>
#include<vector>
using namespace std; 
#define N 11
int main() {
    int A[N]={3,6,8,8,10,12,14,14,14,20,20};
    int H[30] = {0}, k = sizeof(H)/sizeof(H[0]);
    int n = sizeof(A)/sizeof(A[0]), i; //No of elements 
    for(i=0;i<n;i++)
    {
        H[A[i]]++;
    }
    for(i=0; i<=k; i++)
    {
        if(H[i]>1) printf("%d appearing %d times \n", i, H[i]);
    }

};