class Solution {
  public:
    
    bool isPossible(vector<int>&arr, int n, int k, int mid)
    {
        int painter = 1;
        int paintedsegment = 0;
        for(int i = 0; i<n; i++)
        {
            if(paintedsegment+arr[i] <= mid)
            {
                paintedsegment += arr[i];
            }
            else
            {
                painter++;
                if( painter > k || arr[i] > mid  )
                {
                    return false;
                }
                paintedsegment = arr[i];
                
            }
        }
        return true;
        
    }
  
    int minTime(vector<int>& arr, int k) {
        int n = arr.size();
        if(k>n)
        {
            return -1;
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
        }
        int start = 0;
        int end = sum;
        int ans = -1;    
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            
            if(isPossible(arr, n, k, mid))
            {   
                ans = mid;
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
            
        }
        return ans;
    }
};