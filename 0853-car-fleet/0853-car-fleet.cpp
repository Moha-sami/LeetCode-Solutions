#include <vector>
#include <algorithm>

class Solution {
public:
    int carFleet(int target, std::vector<int>& position, std::vector<int>& speed) {
        int n = position.size();
        if (n == 0) return 0;

        std::vector<std::pair<int, int>> cars(n);
        for (int i = 0; i < n; i++) {
            cars[i] = {position[i], speed[i]};
        }

        // Sort descending by starting position
        std::sort(cars.begin(), cars.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });

        int fleets = 0;
        double maxTime = 0.0;

        for (int i = 0; i < n; i++) {
            double time = static_cast<double>(target - cars[i].first) / cars[i].second;
            if (time > maxTime) {
                maxTime = time;
                fleets++;
            }
        }

        return fleets;
    }
};
