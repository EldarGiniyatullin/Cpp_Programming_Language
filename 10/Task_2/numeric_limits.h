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
char numeric_limits<char>::max() { return 0x7FFF; }

template<>
unsigned char numeric_limits<unsigned char>::max() { return 0xFFFF; }

template<>
long numeric_limits<long>::max() { return 0x7FFFFFFF; }






