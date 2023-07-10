// ip = {1,2,3,4,5};
// op = {2,1,4,3,5}

#include<iostream>
using namespace std;

void ans(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if(arr[i+1]<size){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    
}



int main(){


    int arr[6] ={1,2,3,4,5,100};
    ans(arr,6);
    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
}