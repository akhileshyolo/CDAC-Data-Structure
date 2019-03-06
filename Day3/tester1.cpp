#include <iostream>
using namespace std;

template <typename T> 
void apnaSort(T a[], int s) {
   int i = 0, j = 0;
   T temp; 
   
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

 apnaSort(ia, ia_size);

 cout << "After sort, array is :";
 for(int i = 0; i < ia_size; ++i)
   cout << ia[i] << " ";
 cout << endl;

 double da[] = {7.0,5.2,.2,.4,8.3,2.4,.1};
 int da_size = sizeof(da)/sizeof(da[0]);

 cout << "Given array is :";
 for(int i = 0; i < da_size; ++i)
   cout << da[i] << " ";
 cout << endl;

 apnaSort(da, da_size);

 cout << "After sort, array is :";
 for(int i = 0; i < da_size; ++i)
   cout << da[i] << " ";
 cout << endl;
 
 string sa[] = {"hello", "mmj", "gmj", "dnj", "vnj", "ABC"};
 int sa_size = sizeof(sa)/sizeof(sa[0]);

 cout << "Given array is :";
 for(int i = 0; i < sa_size; ++i)
   cout << sa[i] << " ";
 cout << endl;

 apnaSort(sa, sa_size);

 cout << "After sort, array is :";
 for(int i = 0; i < sa_size; ++i)
   cout << sa[i] << " ";
 cout << endl;
  return 0;
}
