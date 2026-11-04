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
        if (head == NULL){
            return head;
        }

        ListNode *tail = head;
        int count = 1;
        while(tail->next != NULL){
            count++;
            tail = tail->next;
        }

        //cout << tail->val << endl;

        k = k % count ;

        // ListNode* temp = head;
        // for(int i = count - 2; i > 0; i--){
        //     temp = temp->next;
        // }

        // cout << temp->val;
        
        while(k){
            ListNode* tail = head;
            for(int i = count - 2; i > 0; i--){
                tail = tail->next;
            }
            ListNode *temp = tail->next;
            tail->next = NULL;
            temp->next = head;
            head = temp;
            k--;
        }
        return head;
    }
};