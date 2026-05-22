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
    void reorderList(ListNode* head) {
        // Traverse to middle
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow points to the middle
        // Now, head 1 and head2 split.
        // Reverse the list from middle. (slow)
        ListNode* prev = nullptr;
        ListNode* second_half = slow->next;
        slow->next = nullptr;
        ListNode* current = second_half;
        while(current != nullptr){
            ListNode* temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        // Reversed.
        // Merge.
        ListNode* head1 = head;
        ListNode* head2 = prev;
        while(head1 != nullptr && head2 != nullptr){
                ListNode* next1 = head1->next;
                ListNode* next2 = head2->next;
                head1->next = head2;
                head2->next = next1;
                head1 = next1;
                head2 = next2;
        }

    }
};
