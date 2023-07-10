
#include <iostream>
using namespace std;

void printarray(int arr[], int size){

for (size_t i = 0; i < size; i++)
{
	std::cout << arr[i] << std::endl;
}
std::cout << "Printing Done" << std::endl;

}

int main()
{
	int arr[5] = {1,22,42,11,222};
	// accesing the array using index
	// cout<<arr[4]<<endl;

	// Runs loop for print the entire array
	// for (size_t i = 0; i < 5; i++)
	// {

	// 	std::cout << arr[i]<< std::endl;
	// }

	int marks[4]= {11,22,33,44};

	
// array with function
printarray(arr,4);
printarray(marks,3);

}
