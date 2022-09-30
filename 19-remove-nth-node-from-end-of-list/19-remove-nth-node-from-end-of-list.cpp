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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *st=new ListNode();
        
        st->next=head;
        ListNode *f=st;
        ListNode *s=st;
        
        for(int i=1;i<=n;i++) f=f->next;
        
        while(f->next!=NULL){
            s=s->next;
            f=f->next;
        }
        
        s->next=s->next->next;
        return st->next;
        
    }
};