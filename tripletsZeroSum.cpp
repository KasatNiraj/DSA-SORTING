bool findTriplets(int arr[], int n){
    
    // sorting the elements
    sort(arr, arr+n);
    
    // traversing the array elements
    for (int i=0; i<n-2; i++)
    {
        int l = i + 1;
        int r = n - 1;
        int x = arr[i];
        
        // check for a pair in the array
        while (l < r)
        {
            // arr[l]+arr[r]+x == 0, then return true
            if (x + arr[l] + arr[r] == 0)
            {
				return true;
            }
            
            // else check if the sum is less than 0,
            // means you need to add some more number 
            // to the sum, so increase the left index, i.e, l
            else if (x + arr[l] + arr[r] < 0)
            {
                l++;
            }
                
            // else increase the right index
            else
            {
                r--;
            }
        }
    }
        return false;
}
