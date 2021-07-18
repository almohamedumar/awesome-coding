int getintersection(Node *head1,Node *head2)
{
    int c1 = getcount(head1);
    int c2 = getcount(head2);
    int d;
    if(c1>c2)
    {
        d = c1-c2;
        intersect(d,head1,head2);
    }
    else
    {
        d=c2-c1;
        intersect(d,head2,head1);
    }
}
int intersect(int d,Node *head1,Node *head2)
{
    Node *curr1 = head1;
    Node *curr2 = head2;
    for(int i=0;i<d;i++)
    {
        if(curr!=NULL)
        {
            return -1;
        }
        curr = curr->next;
    }
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1 == curr2)
        {
            return curr1->data;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return -1;
}
int getcount(Node *head)
{
    Node *curr = head;
    int count =0;
    while(curr!=NULL)
    {
         count++;
        curr = curr->next;
    }
    return count;
}