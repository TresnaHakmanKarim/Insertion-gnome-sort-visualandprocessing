
#include <bits/stdc++.h> 
using namespace std; 
  

void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  

        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
  

void printArray(int arr[], int n)  
{  
    int i;  
    cout << "Array Setelah Di Lakukan Insertion sort:  "; 
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
  
int main()  
{  
    int arr[] = { 321, 200 ,120 , 34, 2, 10, -9, -2, -20, -30 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    cout <<" Array sebelum Di Lakukan INSERTION Sort: 321 200 120 34 2 10 -9 -2 -20 -30 " <<endl;
    insertionSort(arr, n);  
    printArray(arr, n);  
  
    return 0;  
}  
  
