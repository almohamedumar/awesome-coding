void decreasekey(int i,int x)
{
    arr[i] = x;
    while(i!=0 && arr[parent(i)]>arr[i])
    {
        swap(arr[i],arr[parent(i)]);
        i=parent(i);
    }
}