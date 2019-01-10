/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *Pa = headA, *Pb = headB;
    int len1 = 0, len2 = 0, diff = 0;
    // Get two list length
    while (Pa) {
        len1++;
        Pa = Pa->next;
    }
    while (Pb) {
        len2++;
        Pb = Pb->next;
    }
    // Move pointer forward until same list length 
    Pa = headA;
    Pb = headB;
    if (len1 > len2) {
        diff = len1 - len2;
        for (int i=0; i<diff; i++)
            Pa = Pa->next;
    } 
    else if (len2 > len1) {
        diff = len2 - len1;
        for (int i=0; i<diff; i++)
            Pb = Pb->next;
    }
    // Chenck pointer step by step
    while (Pa && Pb) {
        if (Pa == Pb)
            return Pa;
        else {
            Pa = Pa->next;
            Pb = Pb->next;
        }
    }
    return NULL;
}
