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
    ListNode* reverse(ListNode* head){
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // using tortoise and hare algorithm to find the middle elemeent.
        if(head==NULL || head->next==NULL) return true;
            
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;  
        }
        ListNode* newHead=reverse(slow);
        ListNode* first=head;
        ListNode* second=newHead;
        while(second != NULL){
            if(first->val != second->val){
                // reverse(newHead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        // reverse(newHead);
        return true;
        
    }
};