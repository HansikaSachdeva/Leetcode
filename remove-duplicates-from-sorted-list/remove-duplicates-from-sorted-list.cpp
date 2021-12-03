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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* p=head;
        ListNode* t=head->next;
        while(t!=NULL){
            if(p->val != t->val){
                p->next=t;
                p=t;
            }
            t=t->next;
        }
        p->next=NULL;
        return head;
    }
};