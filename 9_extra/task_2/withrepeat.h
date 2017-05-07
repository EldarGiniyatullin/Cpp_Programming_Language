template <class T>
typename T::iterator withRepeat(T& container)
{
    //а если у контейнера нет метода size
    if (container.begin() == container.end() || ++container.begin() == container.end())
    {
        return container.end();
    }
    for (auto p = container.begin(), q = ++container.begin(); q != container.end(); p++, q++)
    {
        if (*p == *q)
        {
            return p;
        }
    }
    return container.end();
}

