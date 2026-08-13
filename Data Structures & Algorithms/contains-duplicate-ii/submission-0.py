class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        for i in range(len(nums)):
            for m in range(i+1, len(nums)):
                if nums[i] == nums[m]:
                    diff = i - m
                    if abs(diff) <= k:
                        return True
        return False 
        