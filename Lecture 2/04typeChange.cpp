#include<iostream>
using namespace std;
int main(){
    //Example conversion ----> implicit -------> small to big bytes
    float mrp = 299.99f;
    double newMrp = mrp;
    cout << "Old MRP:" << mrp << " and New Mrp:" << newMrp<< endl;

    //Exmpale casting ------> explicit -----------> big to small bytes
    char grade = 'A';
    int gradeAsciiValue = grade;
    cout << grade << " Ascii Value is: " << gradeAsciiValue;
    return 0;

}