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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        int c = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            c++;
            temp = temp -> next;
        }
        int mid = ceil(c/2);
        c = 0;
        temp = head;
        while(c!=mid)
        {
            c++;
            temp = temp -> next;
        }
        head = temp;
        return head;
    }
};