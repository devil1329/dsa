class Solution {
public:
    int source,cols,rows;
    
    void dfs(vector<vector<int>>& img, int sr, int sc, int newColor)
    {
        if(sr<0 || sr>=rows || sc<0 || sc>=cols) return;
        else if(img[sr][sc]!=source) return;
        img[sr][sc]=newColor;
        dfs(img,sr+1,sc,newColor);
        dfs(img,sr-1,sc,newColor);
        dfs(img,sr,sc+1,newColor);
        dfs(img,sr,sc-1,newColor);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int newColor) {
        rows=img.size();
        cols=img[0].size();
        source=img[sr][sc];
        if(source!=newColor)
            dfs(img,sr,sc,newColor);
        return img;
    }
};
