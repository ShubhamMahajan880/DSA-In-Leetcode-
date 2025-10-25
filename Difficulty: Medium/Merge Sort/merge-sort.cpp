class Solution
{
public:
    void merge(vector<int>&arr, int st, int mid, int end)
    {
        vector<int>temp;
        int i = st;
        int j = mid+1;// Simple step 
        
        while(i<=mid && j<=end)
        {
            if(arr[i]<=arr[j])
            {
                temp.push_back(arr[i++]);
                
            }
            else
            {
                temp.push_back(arr[j++]);
            }
        }
        
        while(i<=mid)
        {
            temp.push_back(arr[i++]);
        }
        while(j<=end)
        {
            temp.push_back(arr[j++]);
        }
        
        for(int idx = 0; idx< temp.size(); idx++)
        {
            arr[st+idx] = temp[idx];
        }
    }
    
    void mergeSort(vector<int>&arr, int st, int end)
    {
        
        
        if(st<end)
        {
            int mid = st+(end-st)/2;
            mergeSort(arr,st,mid);
            mergeSort(arr,mid+1,end);
            merge(arr,st, mid, end);
            
        }
    }
    
};