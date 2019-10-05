#include <iostream>

// тип как параметр
template <class T>
struct is_int{
    static const bool value = false;
};

template <>
struct is_int<int>{
    static const bool value = true;
};

// тип как результат
template<class T>
struct remove_const {
    using type = T;
};

template<class T>
struct remove_const<const T> {
    using type = T;
};


int main(){

    std::cout << "Is bool int? " << is_int<bool>::value << std::endl;
    std::cout << "Is int int?  " << is_int<int>::value << std::endl;

    typename remove_const<const int>::type a{0};
    a++;
    return 1;
}