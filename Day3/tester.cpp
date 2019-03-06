#include <iostream>
using namespace std;

void algoSort(int * a, int s) {
   int i = 0, j = 0;
   int temp =0;
   
   for(i = 0; i < s; i++) {
      for(j = i;j<s; ++j)
        if (a[j] < a[i]) {
          temp = a[i];
          a[i]=a[j];
          a[j]=temp;
        }
   } 
}
int main() {

 int ia[] = {7,5,2,4,8,2,1};
 
 int ia_size = sizeof(ia)/sizeof(ia[0]);

 cout << "Given array is :";
 for(int i = 0; i < ia_size; ++i)
   cout << ia[i] << " ";
 cout << endl;

 algoSort(ia, ia_size);

 cout << "After sort, array is :";
 for(int i = 0; i < ia_size; ++i)
   cout << ia[i] << " ";
 cout << endl;

  return 0;
}
