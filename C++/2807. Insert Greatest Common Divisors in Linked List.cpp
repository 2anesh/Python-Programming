class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head-> next == NULL) return head;
        ListNode* node1 = head;
        ListNode* node2 = head->next;
        while(node2 != NULL) {
            int gcdValue = calGCD(node1->val, node2->val);
            ListNode* gcdNode = new ListNode(gcdValue);
            node1->next = gcdNode;
            gcdNode->next = node2;
            node1 = node2;
            node2 = node2->next;
        } 
        return head;
    }
private:
    int calGCD(int a, int b) {
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
