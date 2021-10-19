/*Vectors are just dynamic arrays that can change it's size
if you try to add more elements it will just increase it size*/
//Normal arrays have certain limit

#include<iostream>
#include<vector>
using namespace std;

int main() {
    //Creating vector
    vector<int> v1 = {1,2,3}; //vector<DataType> VariableName = {Elements of the said DataType}
    cout <<v1.front()<<endl; //Access vector elements
}   


