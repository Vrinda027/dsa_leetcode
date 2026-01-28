class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int current_sum = 0;
        int min_length = INT_MAX;

        for (int right = 0; right < n; ++right) {
            current_sum += nums[right]; // Expand the window

            // Shrink the window as much as possible while sum >= target
            while (current_sum >= target) {
                min_length = min(min_length, right - left + 1);
                current_sum -= nums[left];
                left++;
            }
        }

        // If min_length was never updated, no valid subarray exists
        return (min_length == INT_MAX) ? 0 : min_length;
    }
};