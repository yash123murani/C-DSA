#include<iostream>
using namespace std;

void Findmax(int arr[], int size){

    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    std::cout << "The max value is" << std::endl;
    cout << max << std::endl;
    
}

void Findmin(int arr[], int size){
    int min = INT_MAX;

    for (size_t i = 0; i < size; i++)
    {   
    if(arr[i]<min){
        min = arr[i];
    }
    
    }
    std::cout << "The minimim value is " <<endl;
    cout << min << std::endl;
    }

 int main() {

    int arr[5] ={1,423,22,22,19};
    Findmax(arr,5);
    Findmin(arr,5);
}

