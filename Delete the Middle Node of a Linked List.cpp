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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next) return NULL;
        int len=0;
        int i;
        
        ListNode* temp = head;
        ListNode* curr = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        delete temp;
        int mid = (len+(2/2))/2;

        if(len % 2 == 0)    i = 0;
        else    i=1;
        for(i; i<= mid; i++, curr = curr->next){
            if(i+1 == mid){
                curr->next = curr->next->next;
                break;
            }
        }
        return head;
    }
};
