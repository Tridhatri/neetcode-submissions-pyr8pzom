class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # Binary search using recursive approach
        # using end indices
        # in place basically
        def binary_search(left, right):
            mid = (left + right) //2
            if left > right:
                return -1
            if target == nums[mid]:
                return mid
            elif target > nums[mid]:
                # Right side
                return binary_search(mid+1,right)
            else:
                return binary_search(left,mid-1)

        return binary_search(0, len(nums)-1)

        
