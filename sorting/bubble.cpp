#include<iostream>
using namespace std;


void bubble(int arr[], int size){

    bool swape = false;
    for(int turn= 0 ; turn<size; turn++){

        for (int i = 0; i < size-1; i++)
        {
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                swape = true;
            }
       
        }
         if(swape == false){
            
            
            std::cout << "Complexity Reduced" << std::endl;
            break;
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
    int arr[6] = {22,54,1,32,-100};
    int arr1[5]={1,2,3,4,5};
    bubble(arr1,5);
    bubble(arr,6);
    printArray(arr,6);
    printArray(arr1,5);
}