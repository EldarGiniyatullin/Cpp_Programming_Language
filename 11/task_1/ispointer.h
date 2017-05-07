template<typename T>
class isPointerClass
{
public:
    static const bool isPointer_()
    {
        return false;
    }
};

template<typename T>
class isPointerClass<T*>
{
public:
    static const bool isPointer_()
    {
        return true;
    }
};

template<typename T>
bool isPointer(const T& value) {
    return isPointerClass<T>::isPointer_();
}
