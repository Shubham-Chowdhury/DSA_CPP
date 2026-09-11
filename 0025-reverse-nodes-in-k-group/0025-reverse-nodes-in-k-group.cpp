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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prevGroup = dummy;

        while (true) {

            // Find the kth node
            ListNode* kth = prevGroup;

            for (int i = 0; i < k; i++) {

                if (kth == nullptr) {
                    return dummy->next;
                }

                kth = kth->next;
            }

            // Not enough nodes for another group
            if (kth == nullptr) {
                return dummy->next;
            }

            // Save important pointers
            ListNode* groupStart = prevGroup->next;
            ListNode* nextGroup = kth->next;

            // Reverse k nodes
            ListNode* prev = nextGroup;
            ListNode* curr = groupStart;

            for (int i = 0; i < k; i++) {

                ListNode* temp = curr->next;
                curr->next = prev;

                prev = curr;
                curr = temp;
            }

            // Connect previous part to reversed group
            prevGroup->next = kth;

            // Move to next group
            prevGroup = groupStart;
        }
    }
};