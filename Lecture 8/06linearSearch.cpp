#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i] == target){ //found
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]= {4,2,7,8,1,2,9};
    int size = 7;
    int target = 9;
    cout << linearSearch(arr,size,target) << endl;
    return 0;
}