class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l = 1
        r = max(piles)
        min_k = r
        while l <=r:
            k = (l + r) // 2
            h_dash = 0
            for i in range(len(piles)):
                h_dash += math.ceil(piles[i]/k)
            if h_dash > h:
                l = k + 1
            else:
                r = k -1
                min_k = min(k, min_k)
        return min_k


            
    


        