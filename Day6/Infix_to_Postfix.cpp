/*
   Program to convert infix expr to postfix
   It is presumed that given Infix string is a valid one
   and it requires input completely in parentheses.
   Date: 8th March 2019
   mmj
*/

#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main(int argc, char * argv[]) {

   const string QUIT = "q";

   stack<char> op; // op operators
   string str;

    while(true) {
      cout << "Enter infix expression (q to quit) : " ;
      cin  >> str;
      if (str != QUIT) {

        istringstream in(str); // Input converted to stream

	char c;

	while(in >> c) {
          switch (c) {
             case '+':
	     case '-':
	     case '*':
	     case '/': op.push(c);
	               break;
	     case ')'  :  cout << op.top() << " ";
	                  op.pop();
			  break;
	     case '0':
	     case '1':
             case '2':
	     case '3':
	     case '4':
	     case '5':
	     case '6':
	     case '7':
	     case '8':
	     case '9': in.putback(c);
	               int n;
		       in >> n;
		       cout << n << " ";
		       break;
	     default   : break;
	  }
	}
         cout << op.top() << endl;
      }
      else {
        cout << "Exiting ...";
	break;
      }
    }

    return 0;
}
