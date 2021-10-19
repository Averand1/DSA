/*Vectors are just dynamic arrays that can change it's size
if you try to add more elements it will just increase it size*/
//Normal arrays have certain limit

#include<iostream>
#include<vector>
using namespace std;

int main() {
    //Creating vector
    vector<int> v1 = {1,2,3,4}; //vector<DataType> VariableName = {Elements of the said DataType}
    //Insert and Erase elements
    v1.insert(v1.begin(), 5); //Insert element at the beginning
    cout<<v1[0]<<endl;
    v1.erase(v1.begin()); //Delete the first element
    cout<<v1[0]<<endl;

}   


