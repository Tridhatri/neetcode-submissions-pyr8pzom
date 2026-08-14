class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:


        # Initialize an empty HashSet
        hashset = set()
        
        for i, num in enumerate(nums):
            # 1. Maintain HashSet size <= k: Remove the element leaving the window
            if i > k:
                hashset.remove(nums[i - k - 1])  # O(1) HashSet removal
                
            # 2. Check if current number already exists in the HashSet
            if num in hashset:                   # O(1) HashSet lookup
                return True
                
            # 3. Insert current number into the HashSet
            hashset.add(num)                     # O(1) HashSet insertion
            
        return False