int firstnode(Node *head)
{
    Node *slow = head,fast = head;
    while(fast!= NULL && fast->next !=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow=fast)
        {
            break;
        }
    }
    if(slow!= fast)
    {
        return 0;
    }
    slow = head;
    while(slow!=fast)
    {
        slow = slow -> next;
        fast = fast -> next;
    }
    return slow->data;
}