#include <algorithm>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int max_count = 1;
        if(nums.empty()) return 0;
        int current_count = 1;
        for(int i = 0; i < nums.size()-1; i ++ ){
            int diff = nums[i+1] - nums[i];
            if(diff == 1 ) {
                current_count++;
            }
            else if(diff == 0) {
                continue;
            }
            else{
                if(current_count > max_count) max_count = current_count;
                current_count = 1;
            }
        }
        if(current_count > max_count) max_count = current_count;
        return max_count;
    }
};