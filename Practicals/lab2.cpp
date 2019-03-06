#include<iostream>
#include<stdlib.h>

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

using namespace std;



void fill_array(int arr[],int size){

	int i = 0;
	while(i<size){
		arr[i] = rand()%100;

		cout<<arr[i]<<endl<<endl;
		i++;

	
	}

	//cout<<"Size of fill is:"<<sizeof(arr);

}


void show_array(int arr[], int size)
{
	
	int i =0;
	while(i<size){
		cout<<"Element "<<i<<" is:"<<arr[i]<<endl;
		i++;
	}


}



int check_odd_even(int num){
	return (num%2==0);
}

void split_array(int source[],int size, int arr1[], int arr2[], int *size1, int *size2){

	int i =0,count=0,arr_even=0, arr_odd=0;
	while(i<size){
		if(check_odd_even(source[i])){
			count++;
		}
		i++;	
	}

	*size1 = count;
	*size2 = (size-count);

	arr1 = new int(count);
	arr2 = new int(size-count);

	int j =0;
	while(j<size){
		if(check_odd_even(source[j])){
			arr1[arr_even] = source[j];
			//cout<<"\nEven--"<<arr1[arr_even];
			arr_even++;
		}else{
			arr2[arr_odd] = source[j];
			//cout<<"\nOdd--"<<arr2[arr_odd];
			arr_odd++;
		}
		j++;
	}	


	cout<<"\nEven Array list:";
	show_array(arr1, *size1);

	cout<<"\nOdd Array list:";
	show_array(arr2, *size2);

}


int main(){

	int size,size1=0,size2=0;
	int  *arr1, *arr2;
	int *arr;
	//int arr[]={10,21,15};
	cout<<"Enter size of array:";
	cin>>size;

	arr = new int(size);
	arr1 = new int(size);
	arr2 = new int(size);

	if(arr==NULL){
		cout<<"Error";
	}

	//cout<<"apana array size is:"<<sizeof(arr[])/sizeof(arr[0]);

	fill_array(arr,size);
	show_array(arr,size);

	
	split_array(arr, size, arr1, arr2,&size1,&size2);

/*

	cout<<"\nEven Array:"; 
	//Not possible to get size by pointer variable
	show_array(arr1, size1);


	cout<<"\nOdd Array:";
	show_array(arr2, size2);

*/
	return 0;
}
