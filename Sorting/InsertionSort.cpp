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

void Insertion(int A[], int n) { //Insertion Sort
    int i,j,x; //Initializing i,j,x
    for(i=1; i<n; i++) //Starting the array from i=1 as we need something to compare bfr it
    {
        j=i-1; //we'll let j start from behind i
        x=A[i]; //element which we want in sorted position
        while(j>-1&&A[j]>x) //once A[j] becomes greater than element we want in sorted positn 
        {
            A[j+1]=A[j]; //we'll shift the element by one to the right
            j--;
        }
        A[j+1]=x; //and at j+1 we'll copy our x which we'll be in sorted position
    } //Repeat this process till whole array is sorted
}
int main() {
    int A[] = {3,7,9,10,6,5,12,4,11,2};
    int n = sizeof(A)/sizeof(A[0]);
    Print(A, n, "A");
    Insertion(A,n);
    Print(A,n,"A");

    return 0; 
}
