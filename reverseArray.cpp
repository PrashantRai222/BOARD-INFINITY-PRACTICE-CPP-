#include <utility>

void reverseArray(int arr[], int n){
    int left = 0;
    int right = n - 1;

    while (left < right) {
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    }
}