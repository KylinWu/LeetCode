/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* faster = head, *slower = head;
    while (faster && faster->next) {
        slower = slower->next;
        faster = faster->next->next;
    }
    return slower;
}
