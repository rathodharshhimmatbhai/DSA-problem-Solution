// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?category[]=prefix-sum&category[]=prefix-sum&difficulty[]=0&page=1&sortBy=submissions&query=category[]prefix-sumdifficulty[]0page1sortBysubmissionscategory[]prefix-sum



// Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum =0;
        for(int i=0;i<n;i++)
        {
            sum += a[i];
        }
        int lsum=0;
        for(int i=0;i<n;i++)
        {
            if(lsum==sum-a[i])
            {
                return i+1;
            }
            lsum += a[i];
            sum -= a[i];
        }
        return -1;
    }
