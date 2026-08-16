#include <vector>
#include <stack>
#include <algorithm>

class Solution {
public:
    int largestRectangleArea(std::vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;
        std::stack<std::pair<int, int>> st; // pair: (startIndex, height)

        for (int i = 0; i < n; i++) {
            int start = i;
            while (!st.empty() && st.top().second > heights[i]) {
                auto [idx, h] = st.top();
                st.pop();
                maxArea = std::max(maxArea, h * (i - idx));
                start = idx;
            }
            st.push({start, heights[i]});
        }

        while (!st.empty()) {
            auto [idx, h] = st.top();
            st.pop();
            maxArea = std::max(maxArea, h * (n - idx));
        }

        return maxArea;
    }
};