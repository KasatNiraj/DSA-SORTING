void bubble(int arr[], int i, int n)
{
   
   int  j; 
    // Last i elements are already in place    
    for (j = 0; j < n-i-1; j++){
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
    } 
}
