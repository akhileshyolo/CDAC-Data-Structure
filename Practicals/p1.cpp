#include<iostream>
#include<stdlib.h>
using namespace std;


//template <typename TD1>

void sort(int *a){

	int temp;
	for(int i=0;i<5;i++)
	{
 	 	for(int j=0;j<5;j++)
  		{
    			if(a[i]>a[j])
    			{
      			temp=a[i];
      			a[i]=a[j];
      			a[j]=temp;
     			}
   		}
	}




}


void show(int *arr){

	for(int i =0;i<5;i++){
		cout<<"\nElement "<<i<<" is :"<<arr[i];
	}

}


//template <typename T1>
void get_arr(int *arr){

	cout<<"\nEnter array Elements"<<endl;

	for(int i =0;i<5;i++){
		cout<<"\nEnter element "<<i<<":";
		cin>>arr[i];
	}

}

int main(){
	
	int arrtype;

	cout<<"Press 1 for Integer,2 for Float, 3 for double:";
	cin>>arrtype;

	switch(arrtype){
		case 1: int arr[5];
			get_arr(arr);
		        sort(arr);
			show(arr);	
			break;

			/*
		case 2: float arr[] = new float(5);
			get_arr(arr);
			break;

		case 3: double arr[] = new double(5);
			get_arr(arr);
			break;
	*/
	}

	//sort(arr);
	//show(arr);

	return 0;
}
