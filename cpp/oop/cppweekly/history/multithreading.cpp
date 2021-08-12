#include <random>
#include <set>
#include <iostream>
#include <algorithm>
#include <future>
#include <array>
#include <utility>

std::set<int> make_sorted_random(const size_t num_elems)
{
    std::set<int> ret;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, num_elems-1);

    std::generate_n(std::inserter(ret, ret.end()), num_elems, [&](){return dis(gen);});

    return ret;
}

int fab(int i)
{
    if (i<=0)
    {
        return 0;
    }
    else if (i==1){
        return 1;
    }
    else
    {
        return fab(i-1)+fab(i-2);
    }
}



template <int i>
struct fib
{
    static const int val = fib<i-1>::val + fib<i-2>::val;
};

template <>
struct fib<0>
{
    static const int val=0;
};

template <>
struct fib<1>
{
    static const int val=1;
};

template <size_t ... I>
const int fibb_impl(std::index_sequence<I...>, const int i)
{
    constexpr std::array<int, sizeof...(I)> a = {fib<I>::val...}; 
    return a[i];
};

const int fibb(const int i)
{
    return fibb_impl(std::make_index_sequence<47>(),i);
}

int main()
{
    auto f1 = std::async(make_sorted_random, 100000);
    auto f2 = std::async(make_sorted_random, 100000);
    auto f3 = std::async(make_sorted_random, 100000);
    auto f4 = std::async(make_sorted_random, 100000);    
    auto f5 = std::async(make_sorted_random, 100000);
    auto f6 = std::async(std::launch::deferred, make_sorted_random, 100000);
    std::cout<<f1.get().size();

    std::cout<<fab(0)<<'\n';
    std::cout<<fab(1)<<'\n';
    std::cout<<fab(2)<<'\n';
    std::cout<<fab(10)<<'\n';
    std::cout<<static_cast<int>(fib<46>::val)<<'\n';
    std::cout<<fibb(46) <<'\n';
    return 0;
}