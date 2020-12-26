
#include <iostream> 
using namespace std; 


void gnomeSort(int arr[], int n) 
{ 
	int index = 0; 

	while (index < n) { 
		if (index == 0) 
			index++; 
		if (arr[index] >= arr[index - 1]) 
			index++; 
		else { 
			swap(arr[index], arr[index - 1]); 
			index--; 
		} 
	} 
	return; 
} 


void printArray(int arr[], int n) 
{ 
	cout << "Array Setelah Di Lakukan GNOME sort:  "; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 


int main() 
{ 
	int arr[] = { 321, 200 ,120 , 34, 2, 10, -9, -2, -20, -30 }; 
	int n = sizeof(arr) / sizeof(arr[0]);
	 
    cout <<" Array sebelum Di Lakukan GNOME Sort: 321 200 120 34 2 10 -9 -2 -20 -30 " <<endl;
    
	gnomeSort(arr, n); 
	printArray(arr, n); 

	return (0); 
} 
