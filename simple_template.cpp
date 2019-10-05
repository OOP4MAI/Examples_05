#include <iostream>


template <class T> 
struct Container{
	 T payload;
     Container(const T& value) : payload(value){};
};

template <class T>
T print(T value){
    std::cout << "Value:" << value << std::endl;
    return value;
}

template<int V>
struct foo{
    static const int value = V;
};
int main(int argc, char** argv) {
    print(10);
    print("Hello world!");
    print<double>(0.5);
    print<char>(48);
    
    Container<int> a(10);
    Container<Container<const char*> > 
        b(Container<const char*>("Hi there!"));
    std::cout << b.payload.payload << std::endl;

    std::cout << foo<10>::value << std::endl;
    return 0;
}


