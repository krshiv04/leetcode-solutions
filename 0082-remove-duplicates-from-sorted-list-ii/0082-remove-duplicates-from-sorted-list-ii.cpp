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
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy, *curr=head;
        while(curr)
        {
            if(curr->next && curr->val==curr->next->val)
            {   
                int dup=curr->val;
                while(curr && curr->val==dup)
                {
                    ListNode* temp=curr;
                    curr=curr->next;
                    delete temp;
                }
                prev->next=curr;
            }
            else
            {   
                prev=prev->next;
                curr=curr->next;
            }
        }
        return dummy->next;
    }
};