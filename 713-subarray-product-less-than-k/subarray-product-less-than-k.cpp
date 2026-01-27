#include <vector>
#include <iostream>

class Solution {
public:
    int numSubarrayProductLessThanK(std::vector<int>& nums, int k) {
        if (k <= 1) return 0; // Edge case
        int ans = 0;
        int left = 0;
        long long product = 1; 
        int n = nums.size();

        for (int right = 0; right < n; ++right) {
            product *= nums[right];

            // Shrink the window from the left if the product is too large
            while (product >= k && left <= right) {
                product /= nums[left];
                left++;
            }

            // Count new valid subarrays ending at 'right'
            // The number of new valid subarrays is (right - left + 1)
            ans += (right - left + 1);
        }

        return ans;
    }
};
