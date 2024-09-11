#include <iostream>
#include <limits.h>  // Include for INT_MAX and INT_MIN

using namespace std;

int main() {
    int nums[] = {99, 98, -187, -167, 88};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;
        }
    }

    cout << "Smallest Index: " << smallestIndex << endl;
    cout << "Largest Index: " << largestIndex << endl;

    return 0;
}
