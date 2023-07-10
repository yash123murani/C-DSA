#include<iostream>
using namespace std;

void ans (int arr[],int size){
    for(int i=0; i<size;i++){
        for(int j = i+1; j<size; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<endl;
            }
        }
        
    }
}

int main(){

    int arr[5]={1,2,3,2,1};
    ans(arr,5);
}