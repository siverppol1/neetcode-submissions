class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max_length=0;
        unordered_set<int> elements;
        for(int i=0;i<nums.size();i++){
            elements.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
        if(!elements.contains(nums[i]-1)){
            int nombre_actuel=nums[i];
            int longeur_actuel=1;

            while(elements.contains(nombre_actuel+1)){
                nombre_actuel++;
                longeur_actuel++;
            }
            max_length = max(max_length,longeur_actuel);
        }
        }

        return max_length;
    }
};
