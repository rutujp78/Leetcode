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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)
        {
            return head;
        }
        ListNode* current=head;
        int listsize=1;
        while(current->next!=NULL)
        {
            listsize+=1;
            current=current->next;
        }
        current->next=head;
        k=k%listsize;
        k=listsize-k;
        while(k--)
        {
            current=current->next;
        }
        head=current->next;
        current->next=NULL;
        return head;
    }
};