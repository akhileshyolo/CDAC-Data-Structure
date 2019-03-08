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


int main(){
	
	string s = "A+B";

	stack<char> inputData;
	stack<char> outputData;

	string temp = "";

	int i = 0;
	for(i = 0;s[i]!='\0';i++){

		inputData.push(s[i]);
		//cout<<temp;
	}

	
	PrintStack(inputData);


	return 0;
}

