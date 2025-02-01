//Problem Statement: Given an array of strings queries and a string pattern, return a boolean array where answer[i] is true if queries[i] matches pattern, and false otherwise.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubSeq(string &s, string &t) {
        int j = 0;
        for (char c : s) {
            if (c >= 'A' && c <= 'Z' && c != t[j]) return false;
            if (c == t[j]) j++;
        }
        return j == t.size();
    }

    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        for (auto &q : queries) {
            ans.push_back(isSubSeq(q, pattern));
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<string> queries = {"camelCase", "camelCAmel", "camelCaseMatch"};
    string pattern = "camel";
    vector<bool> result = sol.camelMatch(queries, pattern);

    for (bool res : result) {
        cout << res << " ";
    }
    return 0;
}
