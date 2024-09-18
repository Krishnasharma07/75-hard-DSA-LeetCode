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
    ListNode* oddEvenList(ListNode* head) {
        int i =1;
        if(head == NULL || head -> next == NULL)
        {
            return head;
        }
        ListNode *odd = NULL;
        ListNode* ot = NULL;
        ListNode* even = NULL;
        ListNode* et = NULL;

        ListNode* temp = head;

        while( temp != NULL)
        {
            ListNode* newNode = new ListNode(temp -> val);
            if(i % 2 == 0)
            {
                if(even == NULL)
                {
                    even = newNode;
                    et = newNode;
                }
                else
                {
                    et -> next = newNode;
                    et = newNode;
                }
            }
            else
            {
                if(odd == NULL)
                {
                    odd = newNode;
                    ot = newNode;
                }
                else
                {
                    ot -> next = newNode;
                    ot = newNode;
                }
            }
            temp = temp -> next;
            i++;
        }
        ot -> next = even;
        return odd;
    }
};