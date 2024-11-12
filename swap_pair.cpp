//You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list. You don't need to print or return anything, just change in the input array itself.

#include<bits/stdc++.h>
using namespace std;

void swapAlternate(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i += 2) {
    swap(arr[i], arr[i + 1]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    
    swapAlternate(arr);
    
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
