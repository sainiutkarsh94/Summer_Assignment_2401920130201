class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (!head || !head->next) {
            return false;
        } // agar head ya head ka next null hai to loop ban hi nahi sakta (0 ya
          // 1 elements se )
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) { // jabtak fast and fast ke agla null na ho
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};