void minheapify(int i)
{
    int lt = left(i);
    int rt = right(i);
    int smallest = i;
    if(lt<size && arr[lt]<arr[i])
    {
        smallest = lt;
    }
    if(rt<size && arr[rt]<arr[smallest])
    {
        rt = smallest;
    }
    if(smallest!= i)
    {
        swap(arr[i],arr[smallest]);
        minheapify(smallest);
    }
}