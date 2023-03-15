#define _CRT_SECURE_NO_WARNINGS 1

//返回链表的中间节点
//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* slow, * fast;
//    slow = fast = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}

//链表中倒数第k个结点
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    // write code here
//    struct ListNode* slow, * fast;
//    slow = fast = pListHead;
//    while (k--)
//    {
//        if (fast == NULL)
//        {
//            return fast;
//        }
//        fast = fast->next;
//    }
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow;
//}