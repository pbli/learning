#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

/*
class Solution1970 {
public:
    int totalRow, totalCol;
    bool check(vector<vector<int>>& v, const int& r, const int& c)
    {
        if (r<0||c<0||r==totalRow||c==totalCol||v[r][c]==1)
            return false;
        else
            return true;
    }
    
    bool bfs(vector<vector<int>> v, const int& r, const int& c)
    {
        queue<pair<int, int>> q;
        bool reachbottom = false;
        q.push({r, c});
        while (!q.empty()&&!reachbottom)
        {
            auto row = q.front().first;
            auto col = q.front().second;
            q.pop();
            v[row][col]=1;
            
            if (check(v, row+1, col))
            {
                q.push({row+1, col});
                if (row+1==totalRow-1)
                    reachbottom = true;
            }
            
            if (check(v, row-1, col))
            {
                q.push({row-1, col});
            }
            
            if (check(v, row, col+1))
            {
                q.push({row, col+1});
            }
            
            if (check(v, row, col-1))
            {
                q.push({row, col-1});
            } 
        }
        return reachbottom;
    }
    
    int latestDayToCross(int row, int col, vector<vector<int>>& B) {
        int start = 0;
        int end = B.size()-1; 
        totalRow = row;
        totalCol = col;             
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            vector<vector<int>> A(row, vector<int>(col,0));
            for(int i = 0;i<mid;i++){
                int u = B[i][0] - 1;
                int v = B[i][1] - 1;
                A[u][v] = 1;
            }
            
            bool can = false;
            for (int i=0; i<col; i++)
            {
                if(bfs(A, 0, i))
                {
                    can = true;
                    break;
                }
            }
            if (can)
                start = mid+1;
            else
                end = mid-1;
        }
        
        return end;
    }
};
*/


int main()
{
    
}
