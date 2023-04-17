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
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode* Slow = head;
        ListNode* Fast = head;
        while(Fast && Fast->next){
            Fast = Fast->next->next;
            Slow = Slow->next;
            if(Fast == Slow)    return true;
        }
    return false;
    }
};
