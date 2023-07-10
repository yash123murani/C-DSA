#include<iostream>
using namespace std;

void checkpair(int arr[],int size, int s){
    for (int i = 0; i < size; i++)
    {
        for (int j= i+1; j < size; j++)
        {
                if(arr[i]+arr[j]==s){
                    cout<<arr[i];
                    cout<<"+";
                    cout<<arr[j]<<endl;

                        std::cout << "" << std::endl;
                }
        }
        
    }
    
}

int main(){

    int arr[7]={1,3,2,2,3,5,0};
    int s = 5;
    checkpair(arr,7,5);
    

}



