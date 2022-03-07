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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
// recursive and faster method
        if(list1==NULL)
        {
            return list2;
        }
        if(list2==NULL)
        {
            return list1;
        }
        
        if(list1->val <= list2->val)
        {
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        else
        {
            list2->next=mergeTwoLists(list1,list2->next);
        }
        return list2;        
        
// iterative method
        // ListNode* p1=list1;
        // ListNode* p2=list2;
//         ListNode* tempNode=new ListNode(-1);
//         ListNode* p3=tempNode;
        
//         while(list1!=NULL) //can take p1 if it is declared same with p2
//         {
//             if(list1->val <= list2->val)
//             {
//                 p3->next=list1;
//                 list1=list1->next;
//             }
//             else
//             {
//                 p3->next=list2;
//                 list2=list2->next;
//             }
//             p3=p3->next;
//         }
//         while(list1!=NULL)
//         {
//             p3->next=list1;
//             list1=list1->next;
//             p3=p3->next;
//         }
//         while(list2!=NULL)
//         {
//             p3->next=list2;
//             list2=list2->next;
//             p3=p3->next;
//         }
//         return tempNode->next;
    
// recursive method
        
//         if(list1==NULL)
//         {
//             return list2;
//         }
//         if(list2==NULL)
//         {
//             return list1;
//         }
        
//         ListNode* result;
        
//         if(list1->val <= list2->val)
//         {
//             result=list1;
//             result->next=mergeTwoLists(list1->next,list2);
//         }
//         else
//         {
//             result=list2;
//             result->next=mergeTwoLists(list1,list2->next);
//         }
//         return result;
//      }
        
     }
};