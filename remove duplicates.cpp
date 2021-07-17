void remove(Node *head)
{
    Node *curr = head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
        }
        else
        {
            curr = curr->next;
        }
    }
}