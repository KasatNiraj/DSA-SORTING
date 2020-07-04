long long findNumberOfTriangles(long long n)
{
    // Sorting the input array
    sort(arr, arr+n);
    
    long long count = 0;
    
    // traversing the array
    for (long long i = 0; i < n-2; ++i)
    {
        long long k = i+2;
        
        // taking element just after ith element
        for (long long j = i+1; j < n; ++j)
        {
            // Traversing all the elements
            // to check if there is any element exists
            // which can satisfy the condition of triangle
            // with the elements at ith and jth index
            while (k < n && arr[i] + arr[j] > arr[k])
               ++k;

            count += k - j - 1;
        }
    }
 
    return count;
}
