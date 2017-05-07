template <class T>
struct numeric_limits
{
    static T max();
};

template<class T>
T numeric_limits<T>::max() {return T();}

template<>
unsigned short numeric_limits<unsigned short>::max() { return 0xFFFF; }

template<>
int numeric_limits<int>::max() { return 0x7FFFFFFF; }

template<>
unsigned int numeric_limits<unsigned int>::max() { return 0xFFFFFFFF; }

template<>
long numeric_limits<long>::max() { return 0x7FFFFFFF; }






