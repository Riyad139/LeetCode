 ## problem link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/   

int i = 0;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        return remove(head,n);
    }
    
    ListNode* remove(ListNode *p,int n){
        if(!p){
            
            return NULL;
        }
       p->next = remove(p->next,n);
        i++;
        if(i == n) return p->next;
        return p;
    }
