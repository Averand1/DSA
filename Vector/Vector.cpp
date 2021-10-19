/*Vectors are just dynamic arrays that can change it's size
if you try to add more elements it will just increase it size*/
//Normal arrays have certain limit

#include<iostream>
#include<vector>
using namespace std;

int main() {
    //Creating vector
    vector<int> v1 = {1,2,3,4}; //vector<DataType> VariableName = {Elements of the said DataType}
    //Iterating through vector

    for(int i = 0; i<v1.size(); ++i) {
        cout<<v1[i]<<endl;
    }
    v1.insert(v1.begin(), 10);

    //v1.begin() returns a pointer that points to the beginning of vector array
    // v1.end() similiar to begin, points at end of the vector array 

    //auto is basically deduce type that v1.begin is returning (a pointer that points to beginning)
    for (auto itr = v1.begin(); itr != v1.end(); ++itr) {
        cout<<*itr<<endl;
    }
}