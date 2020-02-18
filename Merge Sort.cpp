void merge (int input[], int si, int mid, int ei)
{
    int array[ei-si+1];
    int i,j,k;
    
    
    for ( i=si, j=mid+1,k=0; i<=mid && j<=ei; ++k)
    {
        if (input[i]<input[j])
        {
            array[k]= input[i];
            i++;
        }
        
        else 
        {
            array[k]= input[j];
            j++;
        }
                    
     }

    
    
    while(i <= mid)                      //for remaining numbers in input array
        array[k++] = input[i++];
    
    while(j <= ei)
        array[k++] = input[j++];
    
    
    for (int i=0,j=si;j<=ei;++i,++j)     //copying back to original array
       input[j]= array[i];
    
}




void merge_sort ( int input[], int si, int ei)
{
   if (si>ei || si==ei)
       return;
    
    int mid= (si+ei)/2;
    
    merge_sort (input, si, mid);
    merge_sort (input, mid+1, ei);
    
    merge (input,si,mid,ei);
}






void mergeSort(int input[], int size){
	merge_sort (input,0, size-1);
        
}








