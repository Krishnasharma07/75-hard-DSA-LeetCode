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
       vector<int> ans;

       while( list1!= NULL)
       {
          ans.push_back(list1->val);
          list1 = list1 -> next;
       }
       while(list2 != NULL)
       {
        ans.push_back(list2->val);
        list2 = list2 -> next;
       }
      sort(ans.begin(),ans.end());

      ListNode *head = NULL;
      ListNode *tail = NULL;

      for(int i =0; i<ans.size(); i++)
      {
        ListNode * newNode = new ListNode(ans[i]);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = tail -> next;
        }
      }

      return head;

        
    }
};