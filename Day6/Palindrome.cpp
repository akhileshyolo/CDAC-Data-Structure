/*
Program to test whether the string qualifies for being palindrome
   Date: 8th March 2019
   mmj
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Stack {
   private:
      vector<T> elems;    // elements

   public:
      void push(T const&);  // push element
      void pop();               // pop element
      T top() const;            // return top element

      bool empty() const {      // return true if empty.
         return elems.empty();
      }
};

template <class T>
void Stack<T>::push (T const& elem) {
   // append copy of passed element
   elems.push_back(elem);
}

template <class T>
void Stack<T>::pop () {
   if (elems.empty()) {
      throw out_of_range("Stack<>::pop(): empty stack");
   }

   // remove last element
   elems.pop_back();
}

template <class T>
T Stack<T>::top () const {
   if (elems.empty()) {
      throw out_of_range("Stack<>::top(): empty stack");
   }

   // return copy of last element
   return elems.back();
}

bool isPalindrome(const string s) {

   Stack<char> stk_char;

   /* Push the string chars on the stack */
   for(int i = 0; i < s.length(); i++)
     stk_char.push(s[i]);

   /* Pull the string from stack and compare it with s
      Palindrome string will return same chars in the reverse 
      direction!
    */

     for(int i = 0; i < s.length(); i++)
      if(stk_char.top() != s[i]) return false;
      else
        stk_char.pop();

    /* If function has not yet returned yet, then it implies 
       that given string in a palindrom */

     return true;

}
int main() {
    
    const string QUIT = "q";
    string str, result;

    while(true) {
      cout << "Provide input string for Palindrome test? (q to quit) : " ;
      cin  >> str;
      if (str != QUIT) {
        if(isPalindrome(str))
	 result = "\" a Palindrome\n";
	else 
	 result = "\" not a Palindrome\n";
        cout << "\"" << str << result;
      }
      else {
        cout << "Exiting ...";
	break;
      }
    }

    return 0;
}
