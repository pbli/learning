#include <iostream>
#include <unordered_map>
#include <vector>
#include <set>

using namespace std;

template <typename a>
void print(a i)
{
    cout<<i<<endl;
}
// fold expression, if multiple, use this template, otherwise use above one parameter version. BAD
template <typename T, typename ...Ts>
void print(T val, const Ts & ...x)
{
    cout<<val<<endl;
    print(x...);
}

// function to pass in a lot parameters
int add(const std::initializer_list<int>& list)
{
    int sum=0;
    for (auto i:list)
    {
        print(i);
        sum+=i;
    }
    return sum;
}

int main()
{
    // structure binding
    unordered_map<int, int> m{{1,2},{3,4},{5,6}};
    for (auto [key, val]:m)
    {
        cout<<key <<"->" << val<<'\n';
    }

    // if init
    if (int i=1; i>0)
    {
        cout<<'h'<<endl;
    }

    // fold parameters
    print(1,2,3,4);

    cout<<add({1,2,3,4});

    return 0; 
}

