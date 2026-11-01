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
        int c=0;
        ListNode* temp= head;
        while(temp){
        c++;
        temp=temp->next;
      }
       if(c==n){
        return head->next;
       }
       temp=head;
       while(c-(n+1)>0){
        temp=temp->next;
        c--;
       }
       ListNode*temp1=temp;
       temp1=temp1->next;
       temp->next=temp1->next;
       return head;
    }
};