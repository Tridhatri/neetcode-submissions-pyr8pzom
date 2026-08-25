class Solution:
    def findMin(self, nums: List[int]) -> int:
        low = 0
        high = len(nums) -1
        ans = nums[0]
        while(low <= high):
            if(nums[low]<=nums[high]):
                ans = min(ans, nums[low])
                break
            mid = (low + high) //2
            if (nums[low] <= nums[mid]):
                ans = min(ans, nums[low])
                low = mid + 1
            else:
                ans = min(ans, nums[mid])
                high = mid -1
        return ans



        