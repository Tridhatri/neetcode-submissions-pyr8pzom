class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        #local_stack for vrthing
        result = []
        for i,val in enumerate(temperatures):
            count = 0
            stack = []
            stack.append(val)
            j = i + 1
            while(j < len(temperatures)  and stack and temperatures[j] <= val):
                stack.append(temperatures[j]) 
                #displaystack(stack)
                count =  count + 1
                j = j +1
            count = count +1
            if (j >= len(temperatures)):
                result.append(0)
            else:
                result.append(count)
                
        return result   


