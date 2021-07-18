void buildheap()
{
    for(int i = (size-2)/2;i>=0;i--)
    {
        minheapify(i);
    }
}