void swap(int *a, int *b){
        int t = *a;
        *a = *b;
        *b = t;
}

//Always set last element as pivot
int partition(int *arr, int low, int high){
        int pivot = arr[high];
        int i = (low-1); //smaller index

        for(int j = low; j<=high-1; j++){

                if(arr[j]<=pivot){
                        i++;
                        swap(&arr[i], &arr[j]);
                }
        }

        swap(&arr[i+1], &arr[high]);

        return (i+1);

}


void quickSort(int *arr,int low, int high){
	
	int pi; //Partitioning index for splitting
	if(low<high){
		pi = partition(arr, low, high);

		//split and sort based on partition points
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
	}

}

