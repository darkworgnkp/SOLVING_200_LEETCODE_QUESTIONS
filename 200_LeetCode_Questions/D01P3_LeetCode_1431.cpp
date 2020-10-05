// Problem:

// Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.

// For each kid check if there is a way to distribute extraCandies among, 
// the kids such that he or she can have the greatest number of candies among them,
// Notice that multiple kids can have the greatest number of candies.

// Solution:

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = INT_MIN;
        int n = candies.size();
        for(int i=0;i<n;i++){
            if(mx<candies[i]){
                mx = candies[i];
            }
        }
        vector<bool> arr;
        for(int i=0;i<n;i++){
            if((candies[i]+extraCandies)>=mx){
                arr.push_back(true);
            }
            else{
                arr.push_back(false);
            }
        }
        return arr;
    }
};
