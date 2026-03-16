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
    void reorderList(ListNode* head) {
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*cur=slow;
        ListNode*prev=nullptr;
        ListNode*next;
        while(cur!=nullptr){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }

        ListNode*first=head;
        ListNode*second=prev;
        while(second!=nullptr){
            ListNode*tmp1=first->next;
            ListNode*tmp2=second->next;

            first->next=second;
            second->next=tmp1;

            first=tmp1;
            second=tmp2;

        }
        if(first != nullptr) first->next = nullptr;
    }
};