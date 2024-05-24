#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int start, int mid, int end, int &count) {
    vector<int> temp;

    int left = start;
    int right = mid + 1;

    // Merging two sorted arrays into vector temp
    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
            count += (mid - left + 1);
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= end) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copying the merged array back to the original array
    for (int i = start; i <= end; i++) {
        arr[i] = temp[i - start];
    }
}

void mergesort(int *arr, int start, int end, int &count) {
    if (start >= end) {
        return;
    }
    int mid = start + (end - start) / 2;

    mergesort(arr, start, mid, count);
    mergesort(arr, mid + 1, end, count);
    merge(arr, start, mid, end, count);
}

int main() {
    int arr[5] = {5, 3, 2, 4, 1};
    int n = 5;

    int count = 0;
    mergesort(arr, 0, n - 1, count);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Inversions: " << count << endl;

    return 0;
}
