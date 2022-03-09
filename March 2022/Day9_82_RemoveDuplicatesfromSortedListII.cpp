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
        if(head==NULL)
        {
            return head;
        }
        else if(head->next==NULL)
        {
            return head;
        }
        else
        {
            struct ListNode* temp=head->next;
            int val=head->val;
            if(temp->val!=val)
            {
                head->next=deleteDuplicates(temp);
                return head;
            }
            else
            {
                while(temp!=NULL && temp->val==val)
                {
                    ListNode* ptr=temp;
                    temp=temp->next;
                    delete ptr;
                }
                return deleteDuplicates(temp);
            }
        }
    }
};