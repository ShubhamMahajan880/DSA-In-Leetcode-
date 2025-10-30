class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        int n = arr.size();
        
        
        for(int i = 0; i<n-1; i++)
        {   
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
};