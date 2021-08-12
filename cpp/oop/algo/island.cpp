#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

// Matrix = M * N
//. [0 1 3 4 0 8
//   0 0 0 0 0 3
//   1 2 0 0 2 0]
// return 4
//
//
// 
bool searchSurround(const int& i, const int& j, vector<vector<int>>& matrix)
{
    if (i<0 || j<0 || i >= matrix.size()|| j>=matrix[0].size()||matrix[i][j]==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int count_connected_clusters(vector<vector<int>>& matrix)
{
    int ret = 0;
    for (int i=0; i<matrix.size();i++)
    {
        for (int j=0; j<matrix[0].size(); j++)
        {
            if (matrix[i][j]!=0)
            {
                queue<vector<int>> group;
                group.push({i, j});
                ret += 1;
                while (false == group.empty())
                {
                    vector<int> temp = group.front();
                    matrix[temp[0]][temp[1]] = 0;
                    group.pop();
                    
                    if (true == searchSurround(temp[0]+1, temp[1], matrix))
                    {
                        group.push({temp[0]+1, temp[1]});
                    }
                    if (true == searchSurround(temp[0]-1, temp[1],   matrix))
                    {
                        group.push({temp[0]-1, temp[1]});
                    }
                    if (true == searchSurround(temp[0], temp[1]+1,   matrix))
                    {
                        group.push({temp[0], temp[1]+1});
                    }                    
                    if (true == searchSurround(temp[0], temp[1]-1,   matrix))
                    {
                        group.push({temp[0], temp[1]-1});
                    }
                }
            }
        }
    }
    
    return ret;
}
 


int main() {

    vector<vector<int>> ClusterPoints(3, vector<int>(6, 0));
    ClusterPoints[0][1] = 1;
    ClusterPoints[0][2] = 1;
    ClusterPoints[0][3] = 1;
    ClusterPoints[0][5] = 1;
    ClusterPoints[1][5] = 1;
    ClusterPoints[2][0] = 1;
    ClusterPoints[2][1] = 1;
    ClusterPoints[2][4] = 1;
    
    int res = count_connected_clusters(ClusterPoints);
    cout<<res;

    return 0;
}