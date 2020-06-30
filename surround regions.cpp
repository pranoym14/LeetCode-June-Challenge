class Solution {
public:
    int rows,cols;
    void dfs(vector <vector<char>>& graph,int i,int j)
    {
        if(i<0 || j<0 || i>=rows || j>=cols)
            return;
        if(graph[i][j]!='O')
            return;
        graph[i][j]='#';
        dfs(graph,i+1,j);
        dfs(graph,i-1,j);
        dfs(graph,i,j+1);
        dfs(graph,i,j-1);
    }
    void dfs1(vector <vector<char>>& graph,int i,int j)
    {
        if(i<0 || j<0 || i>=rows || j>=cols)
            return;
        if(graph[i][j]!='O')
            return;
        graph[i][j]='X';
        dfs1(graph,i+1,j);
        dfs1(graph,i-1,j);
        dfs1(graph,i,j+1);
        dfs1(graph,i,j-1);
    }
    void solve(vector<vector<char>>& A) {
        rows=A.size();
        if(rows==0)
            return;
        cols=A[0].size();
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(i==0 || j==0 || i==rows-1 || j==cols-1)
                    dfs(A,i,j);
            }
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                dfs1(A,i,j);
            }
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(A[i][j]=='#')
                    A[i][j]='O';
            }
        }
        
        
        
    }
};