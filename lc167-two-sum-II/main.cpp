#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int n = numbers.size();
    int p = 1;
    int q = n;
    int sum = numbers[p - 1] + numbers[q - 1];
    while (sum != target) {
        if (sum > target) q -= 1;
        else if (sum < target) p += 1;
        sum = numbers[p - 1] + numbers[q - 1];
    }
    vector<int> result {p, q};
    return result;
}

int main() {
    //write your own test
    return 0;
}
