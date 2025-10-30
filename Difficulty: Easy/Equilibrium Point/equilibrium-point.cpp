class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        
    int finalSum = 0; int leftSum = 0;
    for(int i =0; i<arr.size(); i++)
    {
        finalSum+=arr[i];
    }
    
    for(int i =0; i<arr.size(); i++)
    {
        int rightSum = finalSum - leftSum - arr[i];
        if(leftSum == rightSum)
        {
            return i;
        }
        leftSum+=arr[i];
    }    
        return -1;
    
    }
};