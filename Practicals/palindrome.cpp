#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>
#include<stdexcept>

using namespace std;

template<class T>
class Stack{
	private:
		vector<T> m_elems;
	public:
		void push(T const&);
		void pop();
		T top() const;

		bool empty() const{
			return elems.empty();
		}
};



int main(){


}
