#include<iostream>
using namespace std;

    void insertion(int arr1[],int size1, int arr2[],int size2){

        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                if(arr1[i]==arr2[j]){
                    arr2[j] = -1221;
                    std::cout << arr1[i] << std::endl;
                }
            }
            
        }
        
    }

int main(){

    int arr1[7] ={1,2,3,4,5,6,3};
    int arr2[4] = {3,4,5,6};
    insertion(arr1,7,arr2,4);
}