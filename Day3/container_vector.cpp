// iterators in vector 
#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
    cout << endl;
  
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
        cout << *ir << " "; 
    cout << endl;
  
    cout << "Size : " << g1.size(); 
    cout << "\nCapacity : " << g1.capacity(); 
    cout << "\nMax_Size : " << g1.max_size(); 
  
    // resizes the vector size to 3 
    g1.resize(3); 
  
    // prints the vector size after resize() 
    cout << "\n After call to resize - Size : " << g1.size(); 
  
    // checks if the vector is empty or not 
    if (g1.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
  
    // Shrinks the vector 
    g1.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    for (auto it = g1.begin(); it != g1.end(); it++) 
        cout << *it << " "; 
    cout << "\nNew Capacity : " << g1.capacity() << endl; 
    
    // New vector - 

    vector<int> g2; 
  
    for (int i = 1; i <= 10; i++) 
        g2.push_back(i * 10); 
  
    cout << "New vector is : "; 
    for (auto i = g2.begin(); i != g2.end(); ++i) 
        cout << *i << " "; 
    cout << endl;

    cout << "\nReference operator [g] : g2[2] = " << g2[2]; 
  
    cout << "\nat : g2.at(4) = " << g2.at(4); 
  
    cout << "\nfront() : g2.front() = " << g2.front(); 
  
    cout << "\nback() : g2.back() = " << g2.back(); 
  
    // pointer to the first element 
    int* pos = g2.data(); 
  
    cout << "\nThe first element is " << *pos << endl; 

    // New vector
    
    // Assign vector
    vector<int> v;

    // fill the array with 10 five times
    v.assign(5, 10);

    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();

    // prints the vector
    cout << "\nAfter insertion the vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    cout << "\nThe last element is: " << v[n - 1];

    // removes last element
    cout << "\nRemove the last element" << endl;
    v.pop_back();

    // prints the vector
    cout << "\nNow, The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // inserts 5 at the beginning
    cout << "\nInserting element 5: " << endl;
    v.insert(v.begin(), 5);

    cout << "\nThe first element is: " << v[0] << endl;

    // removes the first element
    cout << "\nErasing  first element 5: " << endl;
    v.erase(v.begin());

    cout << "\nNow, the first element is: " << v[0] << endl;;

    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];

    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];

    // print the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size();

    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // Swaps v1 and v2
    v1.swap(v2);

    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;
  
    return 0; 
} 
