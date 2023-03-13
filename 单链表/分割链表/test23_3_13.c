#define _CRT_SECURE_NO_WARNINGS 1

//·Ö¸îÁ´±í
//ListNode* partition(ListNode* pHead, int x) {
//    // write code here
//    struct ListNode* gGuard, * gTail, * lGuard, * lTail;
//    gGuard = gTail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    lGuard = lTail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    gTail->next = lTail->next = NULL;
//
//    struct ListNode* cur = pHead;
//    while (cur)
//    {
//        if (cur->val < x)
//        {
//            lTail->next = cur;
//            lTail = lTail->next;
//        }
//        else
//        {
//            gTail->next = cur;
//            gTail = gTail->next;
//        }
//        cur = cur->next;
//    }
//    lTail->next = gGuard->next;
//    gTail->next = NULL;
//    pHead = lGuard->next;
//    free(gGuard);
//    free(lGuard);
//
//    return pHead;
//}