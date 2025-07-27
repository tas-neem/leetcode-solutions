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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
                break;
        }
        if(fast==nullptr || fast->next==nullptr)
            return NULL;
        ListNode* curr=head;
        ListNode* temp=slow;
        while(curr!=temp){
            curr=curr->next;
            temp=temp->next;
        }
        return curr;
    }
};