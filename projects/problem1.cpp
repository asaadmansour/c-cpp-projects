#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int LargestUniqueElement(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return -1;
        sort(arr.begin(), arr.end());  
        int i = n - 1;
        while(i >= 0) {
            int j = i - 1;
            while(j >= 0 && arr[i] == arr[j]) {
                j--;
            }
            int count = i - j;
            if(count == 1)
                return arr[i];
            i = j;
        }
        return -1;    
    }
};

int main() {
    Solution s;
    vector<int> arr = {1,2,3,3,4,4};
    int result = s.LargestUniqueElement(arr);
    cout << "Largest unique element: " << result << endl;
    return 0;
}