# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if(head == None):
            return False
        n = head
        index = 0
        mapp = {}
        found_cycle = True

        while(n.next != None and found_cycle):
            if(n.next == None):
                break
            elif(n.next in mapp):
                #print("Found the cycle")
                found_cycle = True
                break
                # return map[n->next]
                # return the index
            else:
                index = index + 1
                mapp[n] = index
                n = n.next

        if found_cycle and n.next:
            return True
        return False