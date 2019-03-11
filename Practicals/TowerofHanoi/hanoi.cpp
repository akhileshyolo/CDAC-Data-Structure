#include<iostream>
using namespace std;


void towerHanoi(int n, char source, char dest, char mid){

	if(n==1){
		cout<<"\nMoving disk 1 from "<<source<<" to "<<dest;
		return;
	}
	towerHanoi(n-1, source, mid, dest);
	cout<<"\nMoving disk "<<n<<" from "<<source<<" to "<<dest;
	towerHanoi(n-1, mid, dest, source);

}


int main(){
	
	int n = 4;
	towerHanoi(n ,'A', 'C', 'B');	

	return 0;
}
