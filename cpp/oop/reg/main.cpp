#include <regex>
#include <iostream>
using namespace std;


class dog{
public:
    dog(string name)
    {
        m_name = name;
    }
    dog& operator=(const dog& rhs)
    {
        if (&rhs != this)
        {
            m_name = rhs.m_name;
        }
        return *this;
    }
private:
        string m_name;
};

int main()
{
    string str;
    while(0)
    {
        cin>>str;
        regex e("a.b?c*d+[^ef][gh]{1,10}(ijk){1}|x[yz]{1,}");
        bool match = regex_match(str, e);
        cout<<(match? "matched":"not matched")<<endl<<endl;
    }
    
    dog * pDogKing = new dog("DogKing");
    dog DogQueen = *pDogKing;

    return 0;
}