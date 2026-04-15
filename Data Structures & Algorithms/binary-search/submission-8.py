class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # Binary search
        l = len(nums)
        if l:
            mid = l//2
            if target == nums[mid]:
                return mid
            elif mid == 0:
                return -1
            elif target < nums[mid]:
                index = self.search(nums[:mid], target)
                if index == -1:
                    return -1
                return index
            elif target > nums[mid]:
                returned_index = self.search(nums[mid+1:], target)
                if returned_index == -1 or returned_index == None:
                    return -1
                return mid + returned_index + 1
            else:
                return -1
            
        