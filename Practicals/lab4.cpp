/*
 * Use SET from STL, write a program to list prime no upto n.
 *
 * - Akhilesh Yadav
 * */

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool is_prime(int n){

	int flag = 1;
	for(int i = 2;i<=n/2;i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}

int main(){

	vector<int> v1,v2,v3;
	
	int number;
	cout<<"Enter range of value from 0 to find prime numbers:";
	cin>>number;

	for(int i=0;i<number;i++){
		v1.push_back(i+1);
	}

	int n = count_if(v1.begin(), v1.end(), is_prime);
	
	v2.resize(n);
	v3.resize(number-n);

	partition_copy(v1.begin(), v1.end(), v2.begin(),v3.begin(),[](int x){
				return is_prime(x);
			});


	cout<<"\nThere are "<<n<<" even numbers are:";
	for(int &x: v2){
		cout<<x<<" ";
	}

	cout<<"\nThere are "<<(number-n)<<" odd numbers:";
	for(int &y: v3){
		cout<<y<<" ";
	}

	return 0;
}

