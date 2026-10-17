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
        int n = num1.size(), m = num2.size();
        vector<int> res(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + res[i + j + 1];

                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }

        string ans;
        for (int digit : res) {
            if (!ans.empty() || digit != 0)
                ans += to_string(digit);
        }

        return ans.empty() ? "0" : ans;
    }
};

int main() {
    Solution obj;
    cout << obj.multiply("123", "456");
}
