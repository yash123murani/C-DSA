#include<iostream>
using namespace std;

void sol(int arr[], int size, int key){

    int ans = 0;
    for(int i =0; i<size; i++){
        if(arr[i]==key){
            ans++;
        }
    }
    std::cout << ans << std::endl;
}

int main(){
    int arr[7] = {1,2,1,1,2,2,2};
    sol(arr,7,2);
}