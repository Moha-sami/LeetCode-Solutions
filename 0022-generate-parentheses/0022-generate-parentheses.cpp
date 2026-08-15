#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }

private:
    void backtrack(std::vector<std::string>& result, std::string current, int openCount, int closeCount, int max) {
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }

        if (openCount < max) {
            backtrack(result, current + "(", openCount + 1, closeCount, max);
        }
        if (closeCount < openCount) {
            backtrack(result, current + ")", openCount, closeCount + 1, max);
        }
    }
};