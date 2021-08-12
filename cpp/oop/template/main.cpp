#include <iostream>

template<typename T, int N>
class lol{
    
    T m[N];
public:
    void print()
    {
        std::cout<<N*sizeof(T)<<std::endl;
    }
};

template<typename t, int n>
void print(t T)
{
    std::cout<<T <<std::endl <<n<<std::endl; 
}


// THIS IS SHIT!!!!
template<typename T, typename... Ts>
auto printf3(T value, Ts... args) 
{
    std::cout << value << std::endl;
    (void) std::initializer_list<T>
    {
        ([&args]{std::cout << args << std::endl;}(), value)...
    };
}

// recursive template
template<typename T0>
void printf1(T0 value) {
    std::cout << value << std::endl;
}
template<typename T, typename... Ts>
void printf1(T value, Ts... args) {
    std::cout << value << std::endl;
    printf1(args...);
}

template<typename ... vals>
auto averg(vals... values)
{
    auto num = sizeof...(values);
    auto sum = (values+...);
    return sum/num;
}

int main(){

    lol<int, 5> L;

    L.print();


    print<std::string, 10>("lol");

    printf3(1,2,3,4);

    std::cout<<averg(1,2,3,4.0);
    
    printf1(1,'1',"ddd",1000.0f);
    return 0;
}