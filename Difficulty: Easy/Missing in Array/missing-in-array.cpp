class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        
        int rangeXor = 0;
        for (int i = 1; i <= n + 1; i++) {
            rangeXor ^= i; 
        }
        
        int arrXor = 0;
        for (int i = 0; i < n; i++) {
            arrXor ^= arr[i];
        }
        
        return arrXor ^ rangeXor;   
    }
};
