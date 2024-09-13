#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> vec = {1,2,3,4,5,6};
    cout << "Size: " << vec.size() << endl;

    vec.push_back(9);
    cout << "Size: " << vec.size() << endl;
    vec.pop_back();
    cout << "Size: " << vec.size() << endl;
    cout << "Front: " << vec.front() << endl;
    vec.end();
    
    cout << "At: " << vec.at(3) << endl;

    
    return 0;
}