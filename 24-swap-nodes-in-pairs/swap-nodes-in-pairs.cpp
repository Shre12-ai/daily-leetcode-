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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* pointer=dummy;
       
        while(pointer->next!=NULL&&pointer->next->next!=NULL){ 
        ListNode* swap1=pointer->next;
        ListNode* swap2=pointer->next->next;
            swap1->next=swap2->next;
            swap2->next=swap1;
            pointer->next=swap2;
            pointer=swap1;
        }
        return dummy->next;
    }
};