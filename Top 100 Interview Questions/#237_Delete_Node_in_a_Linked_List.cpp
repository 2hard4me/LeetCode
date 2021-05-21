/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* tmp) {
        tmp->val = tmp->next->val;
        ListNode* node = tmp->next;
        tmp->next = tmp->next->next;
        delete node;
    }
};
