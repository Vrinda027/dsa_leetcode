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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode*cur=head;
        ListNode*temp=cur->next;
        while(temp!=nullptr){
            if(temp->val==cur->val){
                cur->next=temp->next;
                temp=temp->next;
            }
            else{
                temp=temp->next;
                cur=cur->next;
            }
        }
        return head;
    }
};