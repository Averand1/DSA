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

void Insertion(int A[], int n) {
    int i,j,x;
    for(i=1; i<n; i++)
    {
        j=i-1;
        x=A[i];
        while(j>-1&&A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
int main() {
    int A[] = {3,7,9,10,6,5,12,4,11,2};
    int n = sizeof(A)/sizeof(A[0]);
    Print(A, n, "A");
    Insertion(A,n);
    Print(A,n,"A");

    return 0; 
}
