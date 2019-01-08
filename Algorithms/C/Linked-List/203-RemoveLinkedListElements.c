/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* ref = head;
    while (ref) {
        if (ref->val == val && ref == head) {
            head = head->next;
            ref = head;
        }
        else if (ref->next && ref->next->val == val) {
            ref->next = ref->next->next;
        }
        else
            ref = ref->next;
    }
    return head;
}
