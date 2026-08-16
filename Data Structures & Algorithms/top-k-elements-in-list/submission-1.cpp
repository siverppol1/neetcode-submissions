class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int>elements;
      vector<pair<int,int>>tableau_frequences;
      for(int i=0;i<nums.size();i++){
        if (elements.count(nums[i]) > 0) {
        elements[nums[i]]++;
        } else {
          elements[nums[i]] = 1; 
        }
      }
        

      for(auto paire:elements ){
        tableau_frequences.push_back({paire.second , paire.first});
      }
      std::sort(tableau_frequences.begin(),tableau_frequences.end());
      vector<int> resultat;
      int i = tableau_frequences.size() - 1; 

while (k > 0) {
    resultat.push_back(tableau_frequences[i].second); 
    i--; 
    k--; 
}

return resultat;

        
    }
};
