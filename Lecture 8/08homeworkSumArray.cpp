// WAF to calculate sum & product of all numbers in an array.
#include<iostream>
using namespace std;
int sumArr = 0;
void sumCalArr(int arr[],int size){
    for(int i=0;i<size;i++){
        sumArr += arr[i];
    }
}

int main(){
    int numb[] = {1,2,3,4,5};
    int size = 5;
    sumCalArr(numb,size);
    cout << "Sum Array: " << sumArr << endl; 

    return 0;
}