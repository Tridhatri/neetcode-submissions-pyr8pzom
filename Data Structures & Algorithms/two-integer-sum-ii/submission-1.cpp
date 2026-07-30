class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       std::vector <int> result;
       int left = 0;
       int right = numbers.size() -1;

       while(left < right && left < numbers.size()) {
            int sum = numbers[left] + numbers[right];
            if(sum == target) return {left+1, right+1};
            else if(sum < target) {
                left++;
            }
            else  {
                right--;
            }


       }
        
    }
};
