#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> vec;
    vec.push_back(0);
    cout << "Add 1: " << vec.capacity() << endl;
    vec.push_back(1);
    cout << "Add 1: " << vec.capacity() << endl;
    vec.push_back(2);
    cout << "Add 2: " << vec.capacity() << endl;
    vec.push_back(3);
    cout << "Add 3: " << vec.capacity() << endl;
    vec.push_back(4);
    cout << "Add 4: " << vec.capacity() << endl;

    
    return 0;
}