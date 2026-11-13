class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int increasing = 1;
        int decreasing = 1;
        int longest = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                increasing++;
                decreasing = 1;
            } else if (nums[i] < nums[i - 1]) {
                decreasing++;
                increasing = 1;
            } else {
                increasing = 1;
                decreasing = 1;
            }

            longest = max(longest, max(increasing, decreasing));
        }

        return longest;
    }
};