/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/* Approach: Two Pointer
 * Step: 1. Split list in the middle.
 *       2. Reverse second list.
 *       3. Compare two list.
 */
        
bool isPalindrome(struct ListNode* head) {
    // Pa is faster pointer
    struct ListNode *Pa = head, *Pb = head;
    struct ListNode *L1 = head, *L2 = NULL;
    if (!head || !head->next)
        return true;
    while (1) {
        if (Pa->next) {
            Pa = Pa->next->next;
            // even
            if (Pa == NULL) {
                L2 = Pb->next;
                break;
            }
            // odd
            else if (Pa->next == NULL) {
                L2 = Pb->next->next;
                break;
            }
            Pb = Pb->next;
        }
    }
    Pb->next = NULL;
    // Reverse L2;
    struct ListNode *prev = NULL, *curr = L2, *next;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    L2 = prev;
    // Compare two list
    while (L1 && L2) {
        if (L1->val != L2->val)
            return false;
        L1 = L1->next;
        L2 = L2->next;
    }
    
    return true;
}
