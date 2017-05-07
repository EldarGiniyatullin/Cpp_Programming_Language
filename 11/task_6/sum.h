#include <utility>

//при решении задачи уперся в проблему определения типа возвращаемого результата
//для оператора +(T1, T2),
//безуспешно делал через result_of<+(T1, T2)>::type,
//решение нашел на stackoverflow, в решении разобрался
template <typename...> struct SumType;
template <typename T1> struct SumType<T1> { typedef T1 type; };
template <typename T1, typename... T>
struct SumType<T1, T...>
{
  typedef typename SumType<T...>::type right_sum_type;
  typedef decltype(std::declval<T1>() + std::declval<right_sum_type>()) type;
};
//конец решения

template <typename T>
T sum(const T& v)
{
  return v;
}

template <typename T1, typename... T>
auto sum(const T1& first, const T&... other) -> typename SumType<T1,T...>::type
{
  return first + sum(other... );
}
