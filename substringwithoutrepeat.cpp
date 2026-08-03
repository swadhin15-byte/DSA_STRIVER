#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last_seen; // char -> most recent index
        int left = 0;
        int max_len = 0;

        for (int right = 0; right < (int)s.size(); right++) {
            char c = s[right];

            if (last_seen.count(c) && last_seen[c] >= left) {
                left = last_seen[c] + 1;
            }

            last_seen[c] = right;
            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};

int main() {
    Solution sol;

    // Test cases
    cout << sol.lengthOfLongestSubstring("abababab") << endl; // Expected: 3
    cout << sol.lengthOfLongestSubstring("bbbbb") << endl;    // Expected: 1
    cout << sol.lengthOfLongestSubstring("pwwkew") << endl;   // Expected: 3
    cout << sol.lengthOfLongestSubstring("") << endl;         // Expected: 0

    return 0;
}
