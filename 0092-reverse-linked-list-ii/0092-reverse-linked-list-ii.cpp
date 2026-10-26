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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL || left==right) return head;
        
        // Place Left and Right Pointers to their respective nodes
        ListNode* r=head, * rn=head->next,* l=head, * lp=NULL;
        int rc=right-1, lc=left-1;
        while(rc--)
        {
            r=r->next;
            rn=rn->next;
        }
        while(lc--)
        {
            lp=l;
            l=l->next;
        }
        
        // Reverse The List
        ListNode* prev=lp, * nxt=NULL,* curr=l;

        while(curr!=rn)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }

        // Link the Reversed List to appropriate Nodes
        
        if(left!=1 && right!=1)
        {
            lp->next=r;
            l->next=rn;
            return head;
        }
        else if(left==1 && right>1)
        {
            l->next=rn;
            return prev;
        }
        return head;
    }
};