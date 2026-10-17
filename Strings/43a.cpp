// LeetCode 43 - Multiply Strings
// Multiply two non-negative integers represented as strings.
//
// Example 1:
// Input: num1 = "2", num2 = "3"
// Output: "6"
//
// Example 2:
// Input: num1 = "123", num2 = "456"
// Output: "56088"

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
    int ansn =stoi(num1)*stoi(num2);
    string ans=to_string(ansn);
    return ans;
    }
};
int main() {
    Solution obj;
    cout << obj.multiply("123", "456");
}
