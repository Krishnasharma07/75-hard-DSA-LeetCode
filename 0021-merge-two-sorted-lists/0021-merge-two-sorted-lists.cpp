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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v1;
        
        ListNode *temp1 = list1, *temp2 = list2;

        while(temp1 != NULL)
        {
            v1.push_back(temp1->val);
            temp1 = temp1 -> next;
        }
        while(temp2 != NULL)
        {
            v1.push_back(temp2->val);
            temp2 = temp2 -> next;
        }
       sort(v1.begin(),v1.end());

       ListNode* head = NULL, *tail = NULL;
       int i =0;
       while( i < v1.size())
       {
          ListNode *newnode = new ListNode(v1[i]);
          if( head == NULL)
          {
            head = newnode;
            tail = newnode;
          }
          else
          {
            tail -> next = newnode;
            tail = newnode;
          }
          i++;

       }
       return head;
    }
};