class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       std::vector <int> result;
       std::unordered_map<int, int> mapp;
       for(int i = 0; i < numbers.size(); i++){
        int to_find = target - numbers[i];
        if(mapp.find(to_find) == mapp.end()){
            mapp[numbers[i]] = i+1;
        }
        else{
        result.push_back(mapp[to_find]);
        result.push_back(i+1);
        }
       } 
       return result;
        
    }
};
