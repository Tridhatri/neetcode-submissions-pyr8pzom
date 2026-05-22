class Solution:
    def isPalindrome(self, s: str) -> bool:
       clean = "".join(char for char in s if char.isalnum())
       s = clean.lower()
       l = len(s)
       i = 0
       mid = math.floor(l*0.5)
       while i < mid:
        print(f"comparing {s[i]} and {s[l-i-1]}")
        if(s[i] != s[l-i-1]):
            return False
        i = i + 1
       
       return True
       
