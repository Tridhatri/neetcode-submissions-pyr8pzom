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

        // Greedy sol to calcuate the target node and the length simulatenously.
        ListNode* first = head; 
        // First pointer starts at head.
        ListNode* dummy = new ListNode(-1, head);
        // Dummy node starts at before the head
        while(n){
            first = first->next;
            n--;
        }
        if(first == nullptr){
            // Which means it is at end.
            // And, we need to remove the head.
            return head->next;
        }
        // First pointer will be at n distance from the head.
        // n+1 distance from second.
        ListNode* second = dummy;
        while(first != nullptr){
            first = first->next;
            second = second->next;
        }
        if(second == dummy){
            return nullptr;
        }
        // Second will be at just before the target node to remove.
        //Remove the second.next node 
        ListNode* second_next = second->next;
        second->next = second->next->next;
        second_next->next = nullptr;
        return head;

    }
};
