void delete(int x)
{
    decreasekey(x,INT_MIN);
    extractmin();
}
void decreasekey(int x,int INT_MIN)
{
    arr[x] = INT_MIN;
    while(i!=0 && arr[parent(x)]>arr[x])
    {
        swap(arr[parent(x)],arr[x]);
        x=parent(x);
    }
}
void extractmin()
{
    if(size<=0)
        return;
    if(size==1)
        size--;
        return arr[0];
    swap(arr[0],arr[size-1]);
    size--;
    minheapify(0);
    return arr[size];
}
void minheapify(int i)
{
    int lt=left(i),rt=right(i);
    int smallest = i;
    if(lt<size && arr[lt]<arr[i])
        smallest = lt;
    if(rt<size && arr[rt]<arr[smallest])
        smallest = rt;
    if(smalllest!=i)
    {
        swap(arr[i],arr[smallest]);
        minheapify(i);
    }
}