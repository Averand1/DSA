#include <iostream>
using namespace std;


void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void display(int a[], int n) 
{
    int i=0;
    while(i<n) {
        cout<<a[i]<<", ";
        i++;
    }
    cout<<endl;
}



int main() {

    int arr[] = {64, 34, 25, 123, 12, 22, 11, 90};
    int size = sizeof(arr)/sizeof(arr[0]); 
    display(arr, size);
    insertionSort(arr, size);
    display(arr, size);

    return 0;
}