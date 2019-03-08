#include<iostream>
#include<cstdlib>
using namespace std;

#include "stack.h"

void sabkaStack::top() const{
	
	if(_top>=0){
		cout<<"Top Operation: element is:"<<_arr[_top]<<endl;
	}else{
		cout<<"Top Operation: Stack Empty"<<endl;
	}
}

void sabkaStack::push(int num){
	
	if(_top<10){
		_top = _top+1;
		_arr[_top] = num;
		cout<<"Push Operation:"<<_arr[_top]<<" inserted."<<endl; 
	}else{
		cout<<"Push Operation: Stack overflown!!!";
	}
}

void sabkaStack::pop(){
	if(_top>=0){
		cout<<"Pop Operation:"<<_arr[_top]<<" removed"<<endl;
		_top--;
	}else{
		cout<<"Pop Operation: Stack Underflow!!!!";
	}
}

int sabkaStack::isEmptyStack(){
	return (_top==-1)?1:0;
}

sabkaStack::sabkaStack(){
	_top = -1;
	//_arr = new int(10);
}

sabkaStack::sabkaStack(int& size){
	//_arr = new int(size);
}
