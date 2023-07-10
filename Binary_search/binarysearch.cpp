#include<iostream>
using namespace std;

void binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;



    while(start<=end){
    if(arr[mid]==key){

        cout<<mid;
    }

    
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = (start+end)/2;
    }

}

int main(){
    int arr[10] = {1,2,5,4,22,11,44,3,22,111};
    binarySearch(arr,10,1);

}