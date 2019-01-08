/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (!head || !head->next)
        return false;
    // faster pointer forward 2 steps
    // slower pointer forward 1 step
    // the 2 pointer will meet if the list is cycle.
    struct ListNode *faster = head;
    struct ListNode *slower = head;
    while (faster && faster->next) {
        slower = slower->next;
        faster = faster->next->next;
        if (slower == faster)
            return true;
    }
    return false;
}
