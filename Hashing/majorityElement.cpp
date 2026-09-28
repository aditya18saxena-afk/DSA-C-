// int majorityElement(vector<int>& nums) {
//         int cnt1=0;
//         int ele1;
//         for(int i=0;i<nums.size();i++){
//             if(cnt1==0){
//                 cnt1=1;
//                 ele1=nums[i];
//             }
//             else if(nums[i] == ele1) cnt1++;
//             else{
//                 cnt1--;
//             }
//         }
//         cnt1=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i] == ele1) cnt1++;
//         }
//         if(cnt1>(nums.size()/2)){
//             return ele1;
//         }
//         return -1;
//     }