#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n =5;
    int currentSum = 0;
    int maxSum = INT8_MIN;
    vector <int> nums = {1,2,3,4,5};
    for(int val: nums){
        currentSum += val;
        maxSum = max(currentSum,maxSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << "Max Sum: " << maxSum << endl; 
    return 0;
}