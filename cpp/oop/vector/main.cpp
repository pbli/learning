#include <iostream>
#include <vector>
using namespace std;


constexpr long double operator"" _kg(long double x) {return x*1000;}
constexpr long double operator"" _g(long double x) {return x;}

int main()
{
    std::vector<int> v(10,1);
    for (auto i:v)
    {
        std::cout<<i<<endl;
    }

    auto x = std::move(v);
    for (auto i:x)
        std::cout<<i<<std::endl;

    std::cout<<v.size()<<endl;
    for (auto i:v)
        std::cout<<i<<std::endl;

    std::string lol="lol";
    std::cout<<&lol<<std::endl;
    auto y{std::move(lol)};
    std::cout<<lol.size()<<endl;
    std::cout<<&lol<<endl;

    long double res = 4.0_kg;
    cout<<(res);
    return 0;

}