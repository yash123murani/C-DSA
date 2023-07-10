#include<iostream>
using namespace std;

int linear(int arr[],int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
          return i;
        }
    }
    
}

int main(){
    int arr[10] = {1,2,5,4,22,11,44,3,22,111};
    int ans = linear(arr,10,22);
    cout<<ans;
}