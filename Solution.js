
/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function (headA, headB) {
    let currentA = headA;
    let currentB = headB;
    while (currentA !== currentB) {
        currentA = (currentA === null) ? headB : currentA.next;
        currentB = (currentB === null) ? headA : currentB.next;
    }
    return currentA;
};

/*
 Function ListNode is in-built in the solution file on leetcode.com. 
 When running the code on the website, do not include this function.
 */
function ListNode(val) {
    this.val = val;
    this.next = null;
}
