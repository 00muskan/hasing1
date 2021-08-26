// https://leetcode.com/problems/island-perimeter/
int islandPerimeter(vector<vector<int>>& g) {
        int n=g.size();
        int m=g[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==1){
                    ans=ans+4;
                    if(i+1<n && g[i+1][j]==1) ans--;
                    if(i-1>=0 && g[i-1][j]==1) ans--;
                    if(j+1<m && g[i][j+1]==1) ans--;
                    if(j-1>=0 && g[i][j-1]==1) ans--;
                }
            }
        }
        return ans;
    }
