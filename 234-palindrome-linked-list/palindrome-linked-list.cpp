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
    ListNode* reverse(ListNode* head)
    {
        if(head == NULL || head -> next == NULL)
        {
            return head;
        }
        ListNode* newnode = reverse(head -> next);
        ListNode* front = head -> next;
        head -> next -> next = head;
        head -> next = NULL;
        return newnode;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        //reverse a linked list
        ListNode* newhead = reverse(slow);
        ListNode* first = head;
        ListNode* second = newhead;
        while(second!=NULL)
        {
            if(first-> val != second -> val)
            {
                return false;
            }
            second = second -> next;
            first = first -> next;
        }
        return true;
    }
};