class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums = sorted(nums) 
        for i, elem in enumerate(nums):
            target = -elem
            if(i > 0 and nums[i] == nums[i-1]):
                continue
            print(elem)
            if(i >= len(nums) - 2):
                return res
            start = i + 1
            end = len(nums) - 1
            while(start < end):
                sum = nums[start] + nums[end]
                if sum == target:
                    res.append([elem, nums[start], nums[end]])
                    start+=1
                    end-=1
                    while(start < end and nums[start] == nums[start-1] ):
                        start+=1
                    while(start < end and nums[end] == nums[end+1] ):
                        end-=1

                elif sum < target:
                    start+=1
                elif sum > target:
                    end-=1
        return res    



                

            
            
        