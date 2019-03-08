#include<iostream>
using namespace std;
#include "stack.h"

int main(){

	sabkaStack<int> stk;

	stk.push(10);
	stk.top();
	stk.pop();
	stk.top();
	stk.top();
	stk.top();

	cout<<endl;
}
