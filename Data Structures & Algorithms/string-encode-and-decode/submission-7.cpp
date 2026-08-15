class Solution {
public:
    string encode(vector<string>& strs) {
       string res="";
       
       for(int i=0;i<strs.size();i++){
         res+= std::to_string(strs[i].size()+"#"+strs[i]);
       }
        return res;
    }
    vector<string> decode(string s) {
        vector<string>result;
       int i=0;
       while(i<s.length()){
        int j=i;

        while(s[j]!='#'){
            j++;
        }
        int length =stoi(s.substr(i,j-i));
        j++;
        string resfinal=s.substr(j,len);
        resfinal2.push_back(resfinal)

        i=j+len;
       }
       return resfinal2;
    } 
};
