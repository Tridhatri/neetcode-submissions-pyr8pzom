class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # Binary search using iterative approach
        # For this , you need left, right indices
        # gaurding the subarrays
        left = 0
        right = len(nums) -1
        while(left <=right):
            mid = (left + right) // 2
            if target == nums[mid]:
                return mid
            elif target < nums[mid]:
                right = mid-1
            else :
                left = mid + 1
        return -1
            
        
