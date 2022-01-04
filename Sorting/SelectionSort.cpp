#include <iostream>
using namespace std;

template <class T> //Print function 
void Print(T& vec, int n, string s) { //takes all types of arguments
    cout << s << ": [" << flush;
    for(int i=0; i<n; i++) {
        cout<<vec[i]<<flush;
        if(i<n-1){
            cout<< ", "<<flush;
        }
    }
    cout<<"]"<<endl;
}

//Swap Function
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void SelectionSort(int A[], int n)
{
    int i,j,k;

    for(i=0; i<n-1; i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(A[j]<A[k])
                k=j;
        }
        swap(&A[i], &A[k]);
    }
}
int main() {
    int A[] = {3,7,9,10,6,5,12,4,11,2};
    int n = sizeof(A)/sizeof(A[0]);
    SelectionSort(A, n);
    Print(A, n, "A");

    return 0; 
}