class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode* traverse = head;
        ListNode* arr[10000];

        int i = 0;

        while(traverse != nullptr){

            for(int j = 0; j < i; j++){

                if(traverse == arr[j]){
                    return true;
                }
            }

            arr[i] = traverse;
            i++;

            traverse = traverse->next;
        }

        return false;
    }
};