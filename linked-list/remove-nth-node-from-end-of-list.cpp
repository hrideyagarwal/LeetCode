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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* traverse=head;
        int i=1;
        while(traverse->next!=nullptr){
            traverse=traverse->next;
            i++;
        }
        n=i-n;
        ListNode* temp = head;

if(n == 0){

    head = head->next;
    delete temp;

    return head;
}

for(int i = 0; i < n-1; i++){
    temp = temp->next;
}

ListNode* nodeToDelete = temp->next;

temp->next = nodeToDelete->next;

delete nodeToDelete;

return head;

    }
};