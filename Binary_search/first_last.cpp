#include <iostream>
using namespace std;

void finf(int arr[], int key, int size) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end) {
        if (key == arr[mid]) {
            ans = mid;
            end = mid - 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    cout <<"First occurrence: "<< ans << endl;
}

void fins(int arr[], int key, int size) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end) {
        if (key == arr[mid]) {
            ans = mid;
            start = mid + 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    cout <<"Second occurrence: "<< ans << endl;
}


int main() {
    int arr[5] = {1, 2, 3, 2, 11};

    finf(arr, 2, 5);
    fins(arr, 2, 5);
    return 0;
}
