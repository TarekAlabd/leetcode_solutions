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
    int size(ListNode* head) {
        int result = 1;
        while (head->next != NULL) {
            result++;
            head = head->next;
        }
        return result;
    }
    ListNode* middleNode(ListNode* head) {
        int index = size(head)/2;
        while (index>0) {
            head = head->next;
            index--;
        }
        return head;
    }
};