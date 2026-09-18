class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>result;
       map<vector<int>,vector<string>>anagramMap;
        for(int i=0;i<strs.size();i++){
           vector<int>TT(26,0);
            for(int j=0;j<strs[i].size();j++){
                int Tmp=strs[i][j]-'a';
                TT[Tmp]++;
            }
             anagramMap[TT].push_back(strs[i]);

        }
        for(auto pair:anagramMap){
            result.push_back(pair.second);
        }
        return result;
    }
};
