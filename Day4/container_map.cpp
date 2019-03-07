// CPP program to demonstrate map
#include <iostream>
#include <map> 
using namespace std; 

typedef map<string,string> Jodi;


int main() { 

   Jodi dac;
   // All the names are fictitous and bear no relationship with 
   // actual people in the world. 
   dac["Atul"] = "Dolly";
   dac["Jagga"] = "Mona";
   dac["Ravan"] = "Laila";
   dac["Munna"] = "Munni";
   dac["Mangesh"] = "Babli";

   for(Jodi::iterator it=dac.begin(); it != dac.end(); ++it)
    cout << it->first << " = " << it->second << "\n";
   
   return 0;
}
