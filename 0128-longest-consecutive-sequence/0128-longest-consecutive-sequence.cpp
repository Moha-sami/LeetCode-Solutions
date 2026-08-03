#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        
        for (int num : numSet) {
            // Only start sequence if 'num - 1' is NOT in set
            if (!numSet.count(num - 1)) {
                int currentNum = num;
                int currentLength = 1;
                
                while (numSet.count(currentNum + 1)) {
                    currentNum += 1;
                    currentLength += 1;
                }
                
                longest = std::max(longest, currentLength);
            }
        }
        
        return longest;
    }
};