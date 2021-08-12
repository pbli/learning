#include <string>
#include <iostream>

auto length(const std::string_view& s)
{
    // most string operation is supported by string view. it is just a view.
    return s.substr(0,3).size();
}

int main()
{
    std::string s("dagewgegggsg gawgaewgef asgewageaw hsherwhgagh");
    auto x=&s;
    std::cout <<length(s);
}