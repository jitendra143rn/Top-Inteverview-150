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
        
        ListNode *newHead ; 
        ListNode* temp = head;
        ListNode* prev= NULL;
        ListNode* start = NULL; 
        int counter = 1;

        while(temp != NULL )
        {
            if(counter == left - 1)
            {
                prev = temp;
            }
            if( counter == left)
            start = temp;

            counter++;
            temp = temp->next;

        }
        ListNode* curr = start;
        ListNode *r, *q ; 
        r = NULL; 
        q = NULL;
        int w = right -left +1 ;
        if(w == 1)
        return head;
        
        while(w)
        {

            r = q;
            q = curr;
            curr = curr->next;
            q->next  = r;

            w--;
        } 
        if(prev !=NULL)
            prev->next = q;
        else 
            head = q;
        start->next = curr;

        return head;

    }
};
