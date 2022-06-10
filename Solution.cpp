
class Solution {
    
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* currentA = headA;
        ListNode* currentB = headB;
        while (currentA != currentB) {
            currentA = (currentA == nullptr) ? headB : currentA->next;
            currentB = (currentB == nullptr) ? headA : currentB->next;
        }
        return currentA;
    }
};

/*
Struct ListNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this struct.
 */
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL){}
};
