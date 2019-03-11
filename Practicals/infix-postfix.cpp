#include<iostream>
#include<stack>
using namespace std;

// A+(B*C-(D/E^F)*G)*H
// Operands could be numbers,alphabets
//  Symbols: +- , */ , * , ()

template <typename T>
void PrintStack(stack<T> s){

	while(!s.empty()){
		cout<<"\t "<<s.top();
		s.pop();
	}

	cout<<"\n";
}

int is_symbol(char &c){

	if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%' || c=='^' || c=='('){
		return 1;
	}
	return 0;
}

int is_operand(char c){

	if(c>=65 && c<=90)
		return 1;
	if(c>=97 && c<=122)
		return 1;
	if(c>=48 && c<=57)
		return 1;

	return 0;
}

int symbol_weight(char &c){

	if(c=="+" || c=="-")
		return 1;

	if(c=="*" || c=="/" || c=="%")
		return 2;
	
	if(c=="^" || c=="$")
		return 3;
	
	if(c=="(")
		return 4;
	
	if(c==")")
		return 5;
	
	default:
		return 0;
}


int main(){
	
	string infix = "A+B";
	char c;

	stack<char> tempStack;
	stack<char> s_postfix;

	for(int i = 0;infix[i]!='\0';i++){
		c = infix[i];
		
		if(c==' ')
			continue;

		/*
		while(symbol_weight()  postfix.top()){
		
		}*/

	}

	PrintStack(s_postfix);

	return 0;
}



