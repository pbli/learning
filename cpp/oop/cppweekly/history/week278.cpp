#include <vector>
#include <iostream>

void printSize(std::vector<int>& vec)
{
    std::cout<<vec.size() << '\n';
}

int main()
{
    std::vector<int> vec;
    vec.reserve(1000);
    printSize(vec);

    for (int i=0; i<1000; i++)
    {
        vec.emplace_back(i);
    }
    printSize(vec);

    std::vector<int> vecc = std::move(vec);
    printSize(vec);

    for (auto i:vecc)
    {
        //std::cout<<i<<'\n';
        vecc.pop_back();
    }
    printSize(vec);
    printSize(vecc);
    printSize(vec);

    return 0;
}