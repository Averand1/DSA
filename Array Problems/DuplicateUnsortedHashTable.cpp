#include<iostream>
using namespace std;
     
int main()
{
    int A[]={1,3,2,5,6,9,5,7,7,9,1};
    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<n-1;i++) 
    {
        int count = 1;          
        for(int j=i+1;j<n;j++)
        {
            if(A[i]==A[j] && A[i]!=-1)
            {
                count++;
                A[j]=-1;
             };
        };          
        if(count>1)
        {
            cout<<A[i]<<" repeats for "<<count<<" times "<<endl;
        };        
     };    
    return 0;
}