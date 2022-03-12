/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    
    // recursive
    unordered_map<Node*, Node*> m;
    Node* traverse(Node* current)
    {
        if(current==NULL)
        {
            return current;
        }
        else
        {
            Node* copyCurrent=new Node(current->val);
            m[current]=copyCurrent;
            
            copyCurrent->next=traverse(current->next);
            copyCurrent->random=m[current->random];
            return copyCurrent;   
        }
    }
    
    Node* copyRandomList(Node* head) {
        
        // iterative with maps
        // Node* temp=head;
        // Node* nhead=NULL;
        // Node* ntail=NULL;
        // unordered_map<Node*, Node*> m;
        // m[NULL]=NULL;
        // while(temp!=NULL)
        // {
        //     if(nhead==NULL)
        //     {
        //         nhead=new Node(temp->val);
        //         ntail=nhead;
        //     }
        //     else
        //     {
        //         ntail->next=new Node(temp->val);
        //         ntail=ntail->next;
        //     }
        //     m[temp]=ntail;
        //     temp=temp->next;
        // }
        // temp=nhead;
        // while(temp!=NULL)
        // {
        //     temp->random=m[head->random];
        //     head=head->next;
        //     temp=temp->next;
        // }
        // return nhead;
        
        // recursive
        if(head==NULL)
        {
            return head;
        }
        else
        {
            return traverse(head);
        }                
    }
};