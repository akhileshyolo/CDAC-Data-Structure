/*
 * - Program to implement Merge Sort with random 10000 records
 * https://www.geeksforgeeks.org/measure-execution-time-function-cpp/
 * - akhilesh yadav
 */

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<chrono>
#include<thread>

#include "MergeSort.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"

using namespace std;
using namespace std::chrono; //nanoseconds, system_clock, seconds
using namespace std::this_thread; //sleep_for, sleep_until

void get_elapsed_time(){


}

int main(){

	int n=100000;
	int arr[n];
	
	srand(time(NULL));

	for(int i=0;i<n;i++)
		arr[i] = rand();

	auto start = high_resolution_clock::now();

	//Lets use auto keyword to avoid typing long
	//type definitions to get the timepoint
	//at this instant use function now()

	//SplitMerge(arr, 0, n-1);
	//quickSort(arr,0,n-1);
	//bubbleSort(arr,10);
	//insertionSort(arr,10);
	selectionSort(arr,10);
	
	auto stop = high_resolution_clock::now();

	sleep_for(nanoseconds(1000));

	cout<<"\nSorted Data:";
	for(int i=0;i<n;i++)
		cout<<"->"<<arr[i];
	
	auto duration = duration_cast<microseconds>(stop-start);


	cout<<"\nTime taken:"<< duration.count()<<" ms"<<endl;

	return 0;
}
