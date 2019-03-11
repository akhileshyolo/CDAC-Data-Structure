void Merge(int *a, int low, int high, int mid){

        //We have low to mid and mid+1 to high already sorted.
        int i = low;
        int j = mid+1;
        int k = 0;
        int temp[high-low+1];

        //Merge two parts into temp[];
        // AND condition, any one can exhaust
        while(i<=mid && j<=high){

                if(a[i]<a[j])
                        temp[k] = a[i++];
                else
                        temp[k] = a[j++];
                k++;
        }

        //if remaining
        while(i<=mid){
                temp[k]=a[i++];
                k++;
        }

        //if remaining
        while(j<=high){
                temp[k]=a[j++];
                k++;
        }

        //Transfer to a[];
        for(i = low; i<=high; i++){
                a[i] = temp[i-low];
        }

}



void SplitMerge(int *a, int low, int high){
        int mid;

        //only if there are elements to split
        if(low<high){
                mid = (low+high)/2;
                // Split data into two half;
                SplitMerge(a, low, mid);
                SplitMerge(a, mid+1, high);

                //Merge them to get sorted output
                Merge(a, low, high, mid);
        }
}


