class Solution
{
public:
    int lengthOfLL(ListNode *head)
    {
        int c = 0;
        ListNode *curr = head;
        while (curr != NULL)
        {
            c++;
            curr = curr->next;
        }
        return c;
    }

    ListNode *reverseKGroup(ListNode *head, int k)
    {
        int length = lengthOfLL(head);
        ListNode *curr = head, *prevFirst = NULL;
        bool isFirstPass = true;
        if (length > k)
        {
            while (curr != NULL)
            {
                ListNode *first = curr, *prev = NULL;
                int count = 0;
                while (curr != NULL and count < k)
                {
                    ListNode *next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                    count++;
                }
                if (isFirstPass)
                {
                    head = prev;
                    isFirstPass = false;
                }
                else
                {
                    prevFirst->next = prev;
                }
                prevFirst = first;
            }
            length = length - k;
        }
        return head;
    }
};
