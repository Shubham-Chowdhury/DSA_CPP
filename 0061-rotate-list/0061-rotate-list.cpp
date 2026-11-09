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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL) {
            return head;
        }

        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        k = k % count;

        while (k) {
            ListNode* tail = head;
            for (int i = count - 2; i > 0; i--) {
                tail = tail->next;
            }
            ListNode* temp = tail->next;
            tail->next = NULL;
            temp->next = head;
            head = temp;
            k--;
        }

        return head;
    }
};