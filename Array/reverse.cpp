#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void printarray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
}

int main(){
    int arr[4]= {1,2,3,4};
    reverse(arr,4);
    printarray(arr,4);
}