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
    ListNode* merge(ListNode* head1, ListNode* head2)
    {   
        ListNode* head=new ListNode(0);
        ListNode* tail=head;

        while(head1&&head2)
        {
            if(head1->val<head2->val)
            {
                tail->next=head1;
                head1=head1->next;
                tail=tail->next;
            }
            else
            {
                tail->next=head2;
                head2=head2->next;
                tail=tail->next;
            }
        }
        if(head1) tail->next=head1;
        else tail->next=head2;
        return head->next;
    }

    ListNode* mergeSort(ListNode* start)
    {   
        if(start==NULL || start->next==NULL) return start;
        ListNode* slow=start, *fast=start->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* right=slow->next;
        slow->next=NULL;
        // next
        ListNode* leftSorted = mergeSort(start);
        // Right
        ListNode* rightSorted = mergeSort(right);

        return merge(leftSorted,rightSorted);
    }
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};