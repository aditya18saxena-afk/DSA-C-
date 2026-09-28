// bool containsDuplicate(vector<int>& nums) {
//         // unordered_set<int> no;
//         // for(int i=0;i<nums.size();i++){
//         //     if(no.find(nums[i]) == no.end()){
//         //         no.insert(nums[i]);
//         //     }else{
//         //         return true;
//         //     }
//         // }
//         // return false;

//         map<int,int> mpp;
//         for(int i =0;i<nums.size();i++){
//             mpp[nums[i]]++;
//         }
//         for(auto it:mpp){
//             if(it.second>1) return true;
//         }
//         return false;
//     }