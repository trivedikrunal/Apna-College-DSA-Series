#include<iostream>
using namespace std;

void changeArr(int arr[],int size){
    cout << "Function changeArr" << endl;
    for(int i=0;i<size;i++){
        arr[i] = 2*arr[i];
    }

}

int main(){
    int arr[] = {1,2,3,4};

    changeArr(arr,4);
    cout << "Function main" << endl;

    for(int i=0;i<4;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0 ;
}