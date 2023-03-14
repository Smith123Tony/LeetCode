#define _CRT_SECURE_NO_WARNINGS 1

//leetcode>>203. 移除链表元素
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* prev = NULL;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        if (cur->val != val)
//        {
//            prev = cur;
//            cur = cur->next;
//        }
//        else
//        {
//            if (prev == NULL)
//            {
//                //头删直接处理head，prev就不用管了。
//                head = cur->next;
//                free(cur);
//                cur = head;//注意不要写成cur=cur->next;因为cur已经释放了
//            }
//            else
//            {
//                prev->next = cur->next;
//                free(cur);
//                cur = prev->next;
//            }
//        }
//    }
//    return head;
//}