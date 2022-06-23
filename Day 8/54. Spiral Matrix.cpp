class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        int startRow=0,endRow=n-1;
        int startCol=0,endCol=m-1;
        
        vector<int>res;
        
        while(startRow<=endRow && startCol<=endCol)
        {
            for(int j=startCol;j<=endCol;j++)
            {
                res.push_back(matrix[startRow][j]);
            }
            startRow++;
            
            for(int i=startRow;i<=endRow;i++)
            {
                res.push_back(matrix[i][endCol]);
            }
            endCol--;
            
            if(startRow<=endRow)
            {
                for(int j=endCol;j>=startCol;j--)
                {
                    res.push_back(matrix[endRow][j]);
                }
                endRow--;
            }
            
            
            if(startCol<=endCol)
            {
                for(int i=endRow;i>=startRow;i--)
                {
                    res.push_back(matrix[i][startCol]);
                }
                startCol++;
            }
        }
        
        return res;
    }
};
