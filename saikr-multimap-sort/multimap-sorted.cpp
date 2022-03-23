#include <iostream>
#include <algorithm>
#include <map>
#define MAX 100
using namespace std;

int main()
{
    int n = 0, temp = 0;
    multimap<int, int, greater<int>> f;
    int p[MAX] = { 0 };
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> temp;
        f.insert(pair<int, int>(temp, i));
    }
    int rank = 0;
    int count = 0;
    int last = -1;
    for (auto &elem : f) {
        cout << count << "  key: " << elem.first << "  value:" << elem.second << endl;
        if (elem.first != last) rank = count + 1;
        p[elem.second] = rank;
        last = elem.first;
        count++;
    }
    for (int i = 0; i < n; i++) cout << p[i] << " ";
}