#include <iostream>

namespace example{
    // метафункция
    template <int V>
    struct abs{
        static const int value = V<0 ? -V : V;
    };
}

int main(void){
    std::cout << example::abs<10>::value << std::endl;
    std::cout << example::abs<-19990>::value << std::endl;
    return 1;
}