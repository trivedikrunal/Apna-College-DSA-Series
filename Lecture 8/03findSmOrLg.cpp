#include<iostream>
using namespace std;

int main(){
    int nums[] = {99,98,-187,-167,88};
    int size = 5;
    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for(int i=0;i<size;i++){
        // if(nums[i]<smallest){
        //     smallest = nums[i];
        // }
        smallest = min(nums[i],smallest);
        largest = max(nums[i],largest);

    }
    cout << "Smallest Number: " << smallest << endl;

    cout << "Largest Number: " << largest << endl;

    return 0;
}