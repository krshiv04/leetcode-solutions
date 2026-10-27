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
        if(head==NULL || head->next==NULL) return head;
        ListNode* prev=head, * curr=head->next;
        while(curr)
        {
            if(prev->val==curr->val)
            {
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
        }
        prev->next=NULL;
        return head;
    }
};