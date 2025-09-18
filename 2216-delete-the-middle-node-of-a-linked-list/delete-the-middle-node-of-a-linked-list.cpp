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
    ListNode* deleteMiddle(ListNode* head) {
        int c = 0;
        if (head == NULL || head -> next == NULL) return NULL;
        ListNode* temp = head;
        while(temp != NULL)
        {
            c++;
            temp = temp -> next;
        }
        int mid = floor(c/2);
        c = 0;
        temp = head;
        while(temp-> next != NULL && temp != NULL)
        {
            c++;
            if(c == mid)
            {
                ListNode* del = temp -> next;
                temp -> next = del -> next;
                return head;
            }
            temp = temp -> next;

        }
        return head;
    }
};