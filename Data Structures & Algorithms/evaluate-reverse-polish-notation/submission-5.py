class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        # two operands and one operator.
        # compute the three and push that to stack
        # pop 2 from stack
        # r1 , r2 and then the pop the next = operator
        # compute that
        # push r3
        # repeat
        operators = ['+', '-', '*', '/']
    
        stack = [] # just a list
        self.stack = stack
        stack = self.stack
        for i in tokens:
            if i not in operators and len(stack) >=0:
                # numbers
                stack.append(int(i))
                self.stack_currently(stack)
                
            elif i in operators and len(stack) >= 2:
                r2 = stack.pop()
                r1 = stack.pop()
                if i == '+':
                    stack.append(r2+r1)
                elif i == '-':
                    stack.append(r1-r2)
                elif i == '*':
                    stack.append(r1*r2)
                elif i == '/':
                    stack.append(int(r1/r2))
                self.stack_currently(stack)
            else:
                # Just an operator and empty stack
                return None

        return stack[0]

    def stack_currently(self, stack):
        print("Display of stack")
        for i in self.stack:
            print(f"{i} , ")
        print("End display")



        