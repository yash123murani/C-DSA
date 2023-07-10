#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){


   for (int i = 0; i < size; i++){
        if(arr[i]==key){
            return 1;
        }

   }
   
return 0;


}
int main(){

    int number[10] = {1,3,55,44,33,21,44,22,33,2123};
    // Find this array contains 44 or not 
   bool found =  search(number,10,44);

   if(found){
    std::cout << "Key is present" << std::endl;
   }else{
    std::cout << "Key is not present" << std::endl;
   }
}