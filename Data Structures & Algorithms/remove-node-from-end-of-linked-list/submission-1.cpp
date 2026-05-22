/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       // Find the last node. Tail.
       ListNode* curr = head;
       int count = 0;
       while(curr != nullptr) {
            curr = curr->next;
            count = count +1;
       }
       ListNode* target = head;
       int counter = count -n;
       if(count == 1){
        return nullptr;
       }
       if(counter ==0){
        return head->next;
       }
       while(counter-1) {
            target = target->next;
            counter--;
       }
       ListNode* target_next = target->next;
       target->next = target_next->next;
       target_next->next = nullptr;
       return head;
       // Travel count - n times from the head. 
       // And then pluck the next node and reroute to the next next node.
       // set the next node next to nullptr
    }
};
