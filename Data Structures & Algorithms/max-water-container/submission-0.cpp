#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int j = heights.size() -1;
        int i = 0;
            while(i <= j && i < heights.size() ) {
                int curr_area = (j-i) * std::min(heights[i], heights[j]);
                if(heights[i] < heights[j]) {
                    i = i +1;      
                }
                else {
                    j = j -1;
                }
                if(curr_area >= area) {
                    area = curr_area;
                }
            }
        return area;
        }
};
