int len(Node *head)
{
    int res = 1;
    Node *temp = head;
    while(temp->next != head)
    {
        res++;
        temp = temp->next;
    }
    return res;
}
int isloop(Node *head)
{
    Node *slow = head , *fast = head; 
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            return len(slow);
        }
    }
    return 0;
}