#include <iostream>
using namespace std;

void ans(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end) {
        int square = arr[mid] * arr[mid];
        // std::cout << square << std::endl;
        if (square == key) {
            ans = mid;
            break;
        }
        if (square < key) {
            ans = mid;
            start = mid + 1;
        } else {
            end = end - 1;
        }
        mid =(start+end)/2;
    }
std::cout << ans << std::endl;
}

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    ans(arr,5, 80);

}
