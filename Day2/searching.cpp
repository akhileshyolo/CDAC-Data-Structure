// CPP program to implement Binary Search in  using STL 

#include <algorithm> 
#include <iostream> 
  
using namespace std; 
  
void show(int a[], int arraysize) 
{ 
    for (int i = 0; i < arraysize; ++i) 
        cout << a[i] << " "; 
} 
  
int main() 
{ 
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
    int asize = sizeof(a) / sizeof(a[0]); 
    cout << "\n The array is : "; 
    show(a, asize); 
  
    cout << "\n\nTo search, we need to sort the array first\n"; 

    sort(a, a + asize); 
    
    cout << "\n\n The array after sorting is : "; 
    show(a, asize); 

    cout << "\n\nNow we perform the binary search for element 2"; 
    if (binary_search(a, a + 10, 2)) 
        cout << "\nElement 2 found in the array\n"; 
    else
        cout << "\nElement 2 not found in the array\n"; 
  
    cout << "\n\nNow  we perform search for 10"; 
    if (binary_search(a, a + 10, 10)) 
        cout << "\nElement 10 found in the array\n"; 
    else
        cout << "\nElement 10 not found in the array\n"; 
  
    cout << endl;

    return 0; 
} 
