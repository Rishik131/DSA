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
    ListNode* middleNode(ListNode* head) {
        int counter=1;
        ListNode* ptr = head;
        while(ptr->next != NULL)
        {
            counter++;
            ptr = ptr->next;
        }
        int target = counter/2+1;
        counter=1;
        ptr = head;
        while(counter<target)
        {
            ptr = ptr->next;
            counter++;

        }
        return ptr;
    }
};