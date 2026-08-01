class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        ListNode* tail = head;
        int cnt = 1;

        while (tail->next != NULL) {
            
            tail = tail->next;
            cnt++;
        }

        k %= cnt;
        if (k == 0)
            return head;

        tail->next = head;

        int steps = cnt - k - 1;
        ListNode* temp = head;

        while (steps--) {
            temp = temp->next;
        }

        ListNode* newHead = temp->next;
        temp->next = NULL;

        return newHead;
    }
};