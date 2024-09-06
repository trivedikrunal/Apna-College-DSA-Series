#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;
    if(marks <=100 && marks >= 90){
        cout << "Grade: A";
    }else if(marks <=90 && marks >= 80){
        cout << "Grade: B";
    }else if(marks <=80 && marks >= 60){
        cout << "Grade: C";
    }else if(marks <=60 && marks >= 40){
        cout << "Grade: D";
    }else if(marks <=40 && marks >= 0){
        cout << "Grade: F";
    }else{
        cout << "Invaild Marks";
    }
    return 0;
}