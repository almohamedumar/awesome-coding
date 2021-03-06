void isloop(Node *head)
{
    Node *slow = head,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(slow!=fast)
    {
        return;
    }
    slow = head;
    while(slow->next!=NULL && fast->next!= NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
}