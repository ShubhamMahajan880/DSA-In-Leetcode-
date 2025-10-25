class Solution {
public:
    // Partition function
    int partition(vector<int> &arr, int st, int end) {
        int pivot = arr[end];
        int i = st - 1;

        for (int j = st; j < end; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            } // simpple quick
        }
        swap(arr[i + 1], arr[end]);
        return i + 1;
    }

    // Quick Sort function
    void quickSort(vector<int> &arr, int st, int end) {
        if (st >= end) return;

        int pivotIndx = partition(arr, st, end);
        quickSort(arr, st, pivotIndx - 1);
        quickSort(arr, pivotIndx + 1, end);
    }
};
