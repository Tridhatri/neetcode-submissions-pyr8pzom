class MinStack:

    def __init__(self):
        # stack is just a list
        self.stack = []
       

    def push(self, val: int) -> None:
        self.stack.append(val)
        return None
        

    def pop(self) -> None:
        self.stack.pop()
        return None
        

    def top(self) -> int:
        top = self.stack[-1]
        return top
        

    def getMin(self) -> int:
        copy_stack = sorted(self.stack)
        return copy_stack[0]
        
