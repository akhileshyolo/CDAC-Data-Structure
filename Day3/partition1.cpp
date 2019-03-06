// partition() and is_partitioned() 
#include<iostream> 
#include<algorithm> // for partition algorithm 
#include<vector> // for vector 
using namespace std; 
int main() 
{ 
    // Initializing vector 
    vector<int> vect = { 2, 1, 5, 6, 8, 7 }; 
      
    // Display vector
    cout << "Vector initialized to ";
    for(int i=0; i<vect.size();++i)
      cout << vect[i] << " ";
    cout << endl;

    // Checking if vector is partitioned  
    // using is_partitioned() 
    is_partitioned(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    })? 
      
    cout << "Vector is partitioned": 
    cout << "Vector is not partitioned"; 
    cout << endl; 
      
    // partitioning vector using partition() 
    partition(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    }); 
      
    // Checking if vector is partitioned  
    // using is_partitioned() 
    is_partitioned(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    })? 
      
    cout << "Now, vector is partitioned after partition operation": 
    cout << "Vector is still not partitioned after partition operation"; 
    cout << endl; 
      
    // Displaying partitioned Vector 
    cout << "The partitioned vector is : "; 
    for (int &x : vect) cout << x << " "; 
    cout << endl;

    // Partition function partitions the vector depending on whether an element is even or odd, 
    // even elements are partitioned from odd elements in no particular order.
      
    return 0; 
      
} 
