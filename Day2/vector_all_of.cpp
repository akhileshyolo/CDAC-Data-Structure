#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_even(int n) {
   return (n % 2 == 0);
}

int main(void) {
   vector<int> v = {2, 4, 6, 8, 10};
   bool result;

   result = all_of(v.begin(), v.end(), is_even);

   if (result == true)
      cout << "Vector contains all even numbers." << endl;

   v[0] = 1;

   result = all_of(v.begin(), v.end(), is_even);

   if (result == false)
      cout << "Vector doesn't contain all even numbers." << endl;

   return 0;
}
