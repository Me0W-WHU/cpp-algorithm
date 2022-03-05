#include <iostream>
#include <vector>
#define SIZE 1
using namespace std;

class Solution {
public:

    int min(int a, int b) {
        return a < b ? a : b;
    }

    void moveZeroes(vector<int>& nums) {
        int p = 0;
        int q = 0;
        int n = nums.size();
        while (q < n) {
            while (nums[q] == 0 && q < n - 1) q = min(n - 1, q + 1);
            nums[p] = nums[q];
            p++; q++;
        }
        while (p < nums.size()) {
            nums[p] = 0;
            p++;
        }
    }
};

int main() {
    Solution solution = *new Solution();
    vector<int> numbers = *new vector<int>(SIZE);
    for(int i = 0 ; i < SIZE ; i++) {
        cin >> numbers[i];
    }
    solution.moveZeroes(numbers);
    for (int i = 0 ; i < SIZE ; i++) {
        cout << numbers[i];
    }
}