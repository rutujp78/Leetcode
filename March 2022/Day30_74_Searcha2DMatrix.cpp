class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        //METHOD 1
        //for(int i  = 0; i<matrix.size(); ++i)
        //{
		// nested for for ietrating each row element
        //    for(int j = 0; j<matrix[0].size(); ++j)
        //   {
				// if found return true
        //        if(matrix[i][j] == target)
        //            return true;
        //    }
        //}
		// after traversal if not found
		// return false
        
        //METHOD 2
        int i = matrix.size();
        int j = matrix[0].size();
        
		// if matrix have 0 rows or 0 colums
        if(i == 0 || j == 0)
        {
            return false;
        }
        
		// treating matrix as array just taking care of endices
		// [0..i*j]
        int left = 0, right = i*j - 1;
        
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
			// a[x] : matrix[x / m][x % m] formulae
            int ans = matrix[mid/j][mid%j];
            if (target == ans)
            {
                return true;
            }
			// left half
            else if(target < ans)
            {
                right = mid - 1;
            }
            else
			// right half
			{
                left = mid + 1;  
            }     
        }
        return false;
    }
};