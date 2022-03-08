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
        // Method 1
        // if(head==NULL)
        // {
        //     return false;
        // }
        // else
        // {
        //     while(head!=NULL)
        //     {
        //         if(head->val==10e6)
        //         {
        //             return true;
        //         }
        //         head->val=10e6;
        //         head=head->next;
        //     }
        //     return false;
        // }
        
        //method 2
        if(head==NULL)
        {
            return false;
        }
        else
        {
            ListNode* forward=head;
            ListNode* backward=head;
            while(forward!=NULL && forward->next!=NULL)
            {
                forward=forward->next->next;
                backward=backward->next;
                if(backward==forward)
                {
                    return true;
                }
            }
            return false;
        }
    }
};