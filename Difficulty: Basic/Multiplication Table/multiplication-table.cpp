#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getTable(int n) {
        vector<int> table(10);  

        for (int i = 0; i < 10; i++) {  
            table[i] = n * (i + 1);     
        }

        return table;  
    }
};
