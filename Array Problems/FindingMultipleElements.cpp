#include <iostream>
using namespace std;
     
int main()
{
    int arr[11]{6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
    int n = 11;
     
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i] + 1) != arr[i + 1])
        {
          int current = arr[i] + 1;
          while (current != arr[i + 1])
          {
            cout << current++ << " ";
          };
        };
    };
     
    return 0;
};