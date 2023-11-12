ListNode *reverseLinkedList(ListNode *head)
{
    ListNode *curr = head;
    ListNode *prev = NULL;
    while (curr != NULL)
    {
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
unsigned long long int getNo(ListNode *head, unsigned long long int &num)
{
    ListNode *curr = head;
    while (curr != NULL)
    {
        num = (num * 10) + curr->val;
        curr = curr->next;
    }
    return num;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *head1 = reverseLinkedList(l1);
    ListNode *head2 = reverseLinkedList(l2);
    unsigned long long int num1 = 0, num2 = 0;
    unsigned long long int n1 = getNo(head1, num1);
    unsigned long long int n2 = getNo(head2, num2);
    unsigned long long int sum = n1 + n2;

    if (sum == 0)
        return l1;
    ListNode *ans = new ListNode(sum % 10);
    sum = sum / 10;
    ListNode *curr = ans;
    while (sum > 0)
    {
        ListNode *temp = new ListNode(sum % 10);
        curr->next = temp;
        sum = sum / 10;
        curr = curr->next;
    }
    curr->next = NULL;
    return ans;
}
