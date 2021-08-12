#include "solution.h"

std::vector<int> Q1(std::vector<int>& vec, const int& target)
{
    std::unordered_map<int, int> m;
    std::vector<int> ret;
    ret.reserve(2);

    for (int i=0; i<vec.size(); ++i)
    {
        if (m.find(vec[i])==m.end())
        {
            m[target-vec[i]] = i;
        }
        else
        {
            ret.emplace_back(i);
            ret.emplace_back(m[vec[i]]);
            break;
        }
    }

    return ret;
}

int Q424(string s, int k) {
    int fast = 1;
    int slow = 0;
    int res  = 0;
    
    
    if (s.size()==1)
        return 1;
    
    map<char, int> charFreq;
    charFreq[s[0]]++;
    charFreq[s[1]]++;
    
    while(fast<s.size())
    {
        int len=fast-slow+1;
        int diff = len-(charFreq.begin()->second);
        cout<<diff<<endl;
        if (diff<=k)
        {
            cout<<len<<endl;
            cout<<fast<<endl;
            cout<<slow<<endl;
            if (len >res)
                res = len;
            fast +=1;
            if (fast<s.size())
                charFreq[s[fast]]++;
        }
        else
        {
            charFreq[s[slow]] -=1;
            slow +=1;
        }
    }
    return res;
}
