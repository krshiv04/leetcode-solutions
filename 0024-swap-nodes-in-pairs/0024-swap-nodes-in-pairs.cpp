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
    ListNode* swapPairs(ListNode* head) {
        ListNode* first=new ListNode(0);
        first->next=head;
        head=first;

        int k=2,x;
        ListNode *sec, *prev, *curr;
        while(first->next)
        {  
            int count = 0;
            ListNode* n = first->next;

            while(n && count < k)
            {
                n = n->next;
                count++;
            }

            if(count != k)
                break; 
            x=k;
            sec=first->next;
            prev=first;
            curr=first->next;

            while(x && curr)
            {
                ListNode* nxt=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nxt;
                x--;
            }

            first->next=prev;
            sec->next=curr;
            first=sec;
        }
        first=head;
        head=head->next;
        delete first;
        return head;
    }
};