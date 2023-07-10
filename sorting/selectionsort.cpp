#include<iostream>
using namespace std;

void sort(int arr[], int size){

    for(int i = 0; i<size; i++){
        // int min = i;

        for (int j = i+1; j < size; j++)
        {
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
        
    }
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
}

int main(){
int arr[5] = {3,2,1,4423,9};
sort(arr,5);
printArray(arr,5); 

}