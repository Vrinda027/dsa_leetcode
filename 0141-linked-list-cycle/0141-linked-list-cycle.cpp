/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*cur=head;
        ListNode*temp=head;
        while(temp!=nullptr && temp->next!=nullptr){
            cur=cur->next;
            temp=temp->next->next;
            if(cur==temp){
                return true;
            }
        }
        return false;
    }
};