class Solution:
    def isValid(self, s: str) -> bool:
        map = {']' : '[' , '}' : '{' , ')' : '('}
        # Now just incoming and existing
        stack = [] # basically a list as a stack
        for incoming in s:
            if incoming not in map:
                # Incoming opening bracket. 
                stack.append(incoming)
            elif (len(stack) >=1):
                # means there is atleast one elment in the stack.
                # Incoming closing bracket
                # And it should be immediate.
                # So we should be able to pop the corresponding open bracket at the stack top.
                top_element = stack.pop()
                if top_element == map[incoming]:
                    continue
                else:
                    return False
                    # Then we found a opening bracket for the corresponding closing bracket
            else:
                return False

        if len(stack) == 0:
            return True
        else:
            return False
                
        
        