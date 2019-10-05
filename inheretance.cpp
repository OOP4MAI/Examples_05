#include <iostream>
#include <typeinfo>

template <typename T>
struct type_is{
    using type = T;
};

template <bool C, class T, class F>
struct conditional : type_is<T>{
};

template <class T, class F>
struct conditional<false, T, F> : type_is<F>{
};

template <class T, class F>
struct conditional<true, T, F> : type_is<T>{
};


int main(){

    conditional<true,int,double>::type value1{};
    conditional<false,int,double>::type value2{};

    std::cout << typeid(decltype(value1)).name() << std::endl;
    std::cout << typeid(decltype(value2)).name() << std::endl;

    return 1;
}