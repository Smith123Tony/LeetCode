#define _CRT_SECURE_NO_WARNINGS 1

//leetcode>>203. �Ƴ�����Ԫ��
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
//                //ͷɾֱ�Ӵ���head��prev�Ͳ��ù��ˡ�
//                head = cur->next;
//                free(cur);
//                cur = head;//ע�ⲻҪд��cur=cur->next;��Ϊcur�Ѿ��ͷ���
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