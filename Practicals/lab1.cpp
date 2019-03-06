#include<iostream>

using namespace std;


template <typename TT>
void get_array(TT *p, int size){

	int i =0;
	cout<<"\nGetting Array Input:\n";

	while(i<size){
		cout<<"Enter element "<<i<<" :";
		cin>>p[i];
		i++;
	}

}

template <typename TT>
void show_array(TT *p, int size){

	int i = 0;
	cout<<"\nDisplay Array:\n";

	while(i<size){
		cout<<"\nElement "<<i<<" is:"<<p[i];
		i++;
	}

}

template <typename TT>
void sort_array(TT *p, int size){

	TT temp;
	cout<<"\n\nSorted Array:\n";

	for(int i = 0;i<size;i++){
	
		for(int j = i;j<size;j++){
			if(p[j]<p[i]){
			
				temp = p[j];
				p[j] = p[i];
				p[i] = temp;

			}
		}

	}

}


int main(){
	
	int type=0,size=0;
	cout<<"\nEnter size of array:";
	cin>>size;
	cout<<"\nEnter 1 for integer, 2 for float, 3 for double:";
	cin>>type;

	switch(type){
	
		case 1: {	
				int arr1[size];	
				get_array(arr1,size);
				show_array(arr1,size);
				sort_array(arr1,size);
				show_array(arr1,size);
			}
			break;
		
		case 2: {
				float arr2[size];	
				get_array(arr2,size);
				show_array(arr2,size);
				sort_array(arr2,size);
				show_array(arr2,size);
			}
			break;
		
		case 3: {
				double arr3[size];	
				get_array(arr3,size);
				show_array(arr3,size);
				sort_array(arr3,size);
				show_array(arr3,size);
			}
			break;
		
	}

        

	return 0;
}
