#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    static bool isValid(string s) {
        stack<char> st;
        for (int i = 0 ; i < s.length() ; i++) {
            switch(s[i]) {
                case '(': st.push('('); break;
                case '{': st.push('{'); break;
                case '[': st.push('['); break;
                case ')':
                    if (st.empty() || st.top() != '(') return false;
                    st.pop(); break;
                case '}':
                    if (st.empty() || st.top() != '{') return false;
                    st.pop(); break;
                case ']':
                    if (st.empty() || st.top() != '[') return false;
                    st.pop(); break;
            }
        }
        if (st.empty()) return true;
        return false;
    }
};

int main() {
    string s;
    cin >> s;
    cout << Solution::isValid(s);
    return 0;
}
