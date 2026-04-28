class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        vector<int>list;
        for(int ast: nums){
            bool destroyed=false;
            while(!list.empty() && list.back()>0 && ast<0){
                if(abs(ast)>abs(list.back())){
                    list.pop_back();
                }
                else if(abs(ast)==abs(list.back())){
                    destroyed=true;
                    list.pop_back();
                    break;
                }else{
                    destroyed=true;
                    break;
                }
            }
            if(!destroyed){
                list.emplace_back(ast);
            }
        }return list;
    }
};