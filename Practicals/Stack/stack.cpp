#include<iostream>
#include<cstdlib>
using namespace std;

#include "stack.h"

template <class T>
void sabkaStack<T>::top() const{
	
	if(_top>=0){
		cout<<"Top Operation: element is:"<<_arr[_top]<<endl;
	}else{
		cout<<"Top Operation: Stack Empty"<<endl;
	}
}

template <class T>
void sabkaStack<T>::push(T num){
	
	if(_top<10){
		_top = _top+1;
		_arr[_top] = num;
		cout<<"Push Operation:"<<_arr[_top]<<" inserted."<<endl; 
	}else{
		cout<<"Push Operation: Stack overflown!!!";
	}
}

template <class T>
void sabkaStack<T>::pop(){
	if(_top>=0){
		cout<<"Pop Operation:"<<_arr[_top]<<" removed"<<endl;
		_top--;
	}else{
		cout<<"Pop Operation: Stack Underflow!!!!";
	}
}

template <class T>
int sabkaStack<T>::isEmptyStack(){
	return (_top==-1)?1:0;
}

template <class T>
sabkaStack<T>::sabkaStack(){
	_top = -1;
	//_arr = new int(10);
}

template <class T>
sabkaStack<T>::sabkaStack(int& size){
	//_arr = new int(size);
}

template class sabkaStack<int>;
template class sabkaStack<float>;
template class sabkaStack<double>;
