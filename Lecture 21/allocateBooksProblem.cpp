#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int student = 1;
    int pages = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }

        if(arr[i] + pages <= maxAllowedPages){
            pages += arr[i];
        }else{
            student++;
            pages = arr[i];
        }
    }

    return student > m ? false:true;

}

int allocateBooks(vector<int> &arr, int n, int m){
    if(m > n){
        return -1;
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int ans = -1;
    // possible Range
    int st = 0;
    int end = sum; 

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(isValid(arr, n, m, mid)){ // left side
            ans = mid;
            end = mid - 1;

        }else{ // right side
            st = mid + 1;
        }
    }

    return ans;

}

int main(){
    vector<int> arr = {15,17,20};
    int n = 3;
    int m = 2;

    cout << allocateBooks(arr, n, m) << endl;

    return 0;
}