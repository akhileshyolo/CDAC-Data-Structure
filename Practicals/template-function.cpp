#include<iostream>
#include<string>

using namespace std;

/*
template <typename T>
inline T const& Max(){

	
}*/

inline int Max(int a,int b){
	return a>b?a:b;
}

int main(){

	int num1,num2,answer;
	cout<<"\nEnter num1, num2:";
	cin>>num1>>num2;
	answer = Max(num1,num2);
	cout<<answer<<" is greater.";

	return answer;
}
