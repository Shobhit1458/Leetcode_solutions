class Solution{
    public:
        bool binarySearch(vector<int>& row, int target)
        {
            int low=0;
            int high=row.size()-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(row[mid]==target)
                {
                    return true;
                }
                else if (row[mid]>target)
                {
                    high=mid-1;
                }
                else 
                    low=mid+1;
            }
            return false;
        }
    bool searchMatrix(vector<vector<int>>&matrix, int target)
    {
        if ((matrix.size()==0) || (matrix[0].size() == 0))
            return false;
        int row=0;
        while((row<matrix.size()) && (matrix[row].back()< target))
            row++;
        if (row >= matrix.size())
           return false;
        return binarySearch(matrix[row], target);
    }
};

// class Solution {
// public:
//     bool binarySearch(vector<int>& vec, int target) {
//         int l = 0, r = vec.size()-1;
//         while (l <= r)
//         {
//             int mid = (l + r) / 2;
//             if (vec[mid] == target)
//                 return true;
//             else if (vec[mid] < target)
//                 l = mid + 1;
//             else
//                 r = mid - 1;
//         }
//         return false;
//     }
    
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         if ((matrix.size() == 0) || (matrix[0].size() == 0)) return false;
//         int row = 0;
//         while ((row < matrix.size()) && (matrix[row].back() < target))
//             row++;
        
//         if (row >= matrix.size()) return false;
        
//         return binarySearch(matrix[row], target);
//     }
// };
