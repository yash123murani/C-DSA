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

    int arr[9]={8,7,2,5,4,7,1,3,6};
    ans(arr,9);
}