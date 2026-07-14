class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        std::vector<int> matrix1;
        for(const auto row: matrix){
            for(const auto elem: row){
                matrix1.push_back(elem);
        }
        }

        int i = 0;
        int j = matrix1.size() -1 ;
        bool found = false;
        while(i <= j && !found)
        {
            int midpoint = (i+j) /2;
            if(matrix1[midpoint] == target){
                found = false;
                return true;
            }
            else if(matrix1[midpoint] < target){
                i = midpoint +1;
            }
            else{
                j = midpoint -1;
            }


        }
        return false;
    }
};
