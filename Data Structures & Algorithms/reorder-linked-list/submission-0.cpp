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
      std::unordered_map<int, ListNode*>  hm;
      ListNode* act_head = head;
      int count = 0;
      while(head != nullptr){
           hm[count] = head;
           head = head->next;
           count++;
      }
    int counter = 0;
    ListNode* current = act_head;
    int left = 0;
    int right = count -1;
    while(left < right) {
        hm[left]->next = hm[right];
        left++;
        if(left >= right) break;
        hm[right]->next = hm[left];
        right--;
    }
    hm[right]->next = nullptr;

    }
};
