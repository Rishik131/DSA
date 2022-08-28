/* A matrix diagonal is a diagonal line of cells starting from some cell
 in either the topmost row or leftmost column and going in the bottom-right direction
 until reaching the matrix's end. For example, the matrix diagonal starting from mat[2][0],
 where mat is a 6 x 3 matrix, includes cells mat[2][0], mat[3][1], and mat[4][2].
Given an m x n matrix mat of integers, sort each matrix diagonal in ascending order and
return the resulting matrix. */

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int> mat1;
        int r = mat.size();
        int c = mat[0].size();
        
        for(int i = 0;i<r;i++)
        {
            int m = i;
            int n = 0;
            while(m<r && n<c)
            {
                mat1.push_back(mat[m][n]);
                m++;
                n++;
            }
            sort(mat1.begin(),mat1.end());
            m = i;
            n = 0;
            while(m<r && n<c)
            {
                mat[m][n] = mat1[n];
                m++;
                n++;
            }
            
            mat1.clear();
        }
        
        for(int i=0;i<c;i++)
        {
            int m = 0;
            int n = i;
            while(m<r && n<c)
            {
                mat1.push_back(mat[m][n]);
                m++;
                n++;
            }
            sort(mat1.begin(),mat1.end());
            m = 0;
            n = i;
            while(m<r && n<c)
            {
                mat[m][n] = mat1[m];
                m++;
                n++;
            }
            mat1.clear();
        }
        return mat;
    }
};