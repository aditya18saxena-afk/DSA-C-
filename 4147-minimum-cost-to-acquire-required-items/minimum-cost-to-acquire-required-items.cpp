class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        // long long a=0,b=0;
        // a=max(need1,need2)*costBoth;
        // b=need1*cost1  + need2*cost2;
        // return min(a,b);
        long long pairs=min(need1,need2);
        long long pairCost=min(1LL*costBoth,1LL*cost1+cost2);
        return pairs*pairCost+(need1-pairs)*min(cost1,costBoth)+(need2-pairs)*min(cost2,costBoth);
    }
};