class Solution {
public:
    long long merge(vector<int>& arr, int low, int mid, int high) {
        int i = low, j = mid + 1;
        vector<int> temp;
        long long cnt = 0;

        while (i <= mid && j <= high) {
            if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
            else {
                temp.push_back(arr[j++]);
                cnt += (mid - i + 1);  
            }
        }

        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= high) temp.push_back(arr[j++]);

        for (int k = low; k <= high; k++) arr[k] = temp[k - low];
        return cnt;
    }

    long long mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high) return 0;
        int mid = (low + high) / 2;
        long long cnt = 0;
        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt += merge(arr, low, mid, high);
        return cnt;
    }

    long long inversionCount(vector<int>& arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};
