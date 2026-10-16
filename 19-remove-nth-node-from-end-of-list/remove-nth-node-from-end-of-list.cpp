class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c = 0;
        ListNode* temp = head;

        while (temp) {
            c++;
            temp = temp->next;
        }

        if (n == c) {
            return head->next;
        }

        temp = head;

        while (c - (n + 1) > 0) {
            temp = temp->next;
            c--;
        }

        ListNode* temp1 = temp;
        temp = temp->next;
        temp1->next = temp->next;

        return head;
    }
};