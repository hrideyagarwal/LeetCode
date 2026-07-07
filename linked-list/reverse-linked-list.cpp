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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* saved = head;
        ListNode* temp= nullptr;
        while(curr!=nullptr){
    saved=curr->next;
    curr->next=temp;
      temp=curr;
    curr=saved;
  


}
if(temp!=nullptr){
  head=temp;
}

return head;
}};