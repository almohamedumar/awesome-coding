bool isloop(Node *head)
{
    Node *slow = head, *fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow= slow->next;
        fast- = fast->next->next;
        if(slow==fast)
        {
            return true;
            break;
        }
    }
    return false;
}