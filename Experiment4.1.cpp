//Problem Statement: Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s. A shift on s consists of moving the leftmost character of s to the rightmost position.
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string g) {
        if (s.size() != g.size())
            return false;
        if ((s + s).find(g) != string::npos)
            return true;
        else 
            return false;
    }
};

int main() {
    Solution sol;
    string s = "abcde", g = "cdeab";
    cout << sol.rotateString(s, g) << endl; // returns 1 (true)
    return 0;
}
