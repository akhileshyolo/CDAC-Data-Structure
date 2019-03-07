// CPP program to demonstrate the set
#include <iostream>
#include <c++/7.3.0/set> 
using namespace std; 
int main() 
{ 
  
    set<int> s1; 
  
    // Function to insert elements 
    // in the set container 
    s1.insert(1); 
    s1.insert(4); 
    s1.insert(2); 
    s1.insert(5); 
    s1.insert(3); 
  
    cout << "The elements in set1 are: "; 
    for (auto it = s1.begin(); it != s1.end(); it++) 
        cout << *it << " "; 
  
    set<int> s2; 
  
    // Function to insert one set to another 
    // Inserts all elements from where 3 is to the end is inserted to set2 
    s2.insert(s1.find(3), s1.end()); 
  
    cout << "\nThe elements in set2 are: "; 
    for (auto it = s2.begin(); it != s2.end(); it++) 
        cout << *it << " "; 
    cout << endl;

    // lower_bound() related


    set<int> s3;

    // Function to insert elements
    // in the set container
    s3.insert(1);
    s3.insert(2);
    s3.insert(4);
    s3.insert(5);
    s3.insert(6);
    s3.insert(7);

    cout << "The set elements are: ";
    for (auto it = s3.begin(); it != s3.end(); it++)
        cout << *it << " ";

    // when 2 is present
    auto it = s3.lower_bound(2);
    cout << "\nThe lower bound of key 2 is ";
    cout << (*it) << endl;

    // when 3 is not present
    // points to next greater after 3
    it = s3.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*it) << endl;

    return 0; 

} 
