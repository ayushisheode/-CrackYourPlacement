class Solution
{
    public:
        void setZeroes(vector<vector < int>> &matrix)
        {
            int n = matrix.size();
            int m = matrix[0].size();

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        matrix[i][0] = 0;
                        matrix[0][j] = 0;
                    }
                }
            }
        }
};
