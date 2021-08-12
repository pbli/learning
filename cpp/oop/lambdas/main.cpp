#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template<typename T>
T Plus1(T val)
{
    return val+1;
}

auto plus1=[value=1](int x) {return x+value;};

class point
{
public:
    int x;
    int y;
public:
    point(int _x, int _y):x(_x), y(_y){
    }
    point():x(0),y(0){
    }
};

int main()
{
    auto comp = [](point& a, point& b){
        return a.x > b.x;
    };

    vector<point> points;
    points.push_back(point(1,2));
    points.push_back(point(2,3));
    sort(points.begin(), points.end(), comp);
    cout<<points[0].x<<endl;
    cout<<plus1(100)<< endl;
    cout<<Plus1<int>(static_cast<int>(100.5)) << endl;
    cout<<Plus1<float>(100) << endl;
    cout<<Plus1(100) << endl;
    cout<<Plus1(100.5) << endl;

    int value = 1;
    auto copy_value = [value] {
        return value;
    };
    value = 100;
    auto stored_value = copy_value();
    std::cout << "stored_value = " << stored_value << std::endl;
    
    return 0;
}