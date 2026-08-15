class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs.size();i++){
          res+=to_string(strs[i].length())+"#"+strs[i];
        }
        return res;

    }

    vector<string> decode(string s) {
        vector<string>result;
        int i=0;
        while(i<s.length()){
            int j=i;
        }
         while (s[j] != '#') {
            j++;
        }

        int len = stoi(s.substr(i, j - i));
        j++; // skip '#'
        string word = s.substr(j, len);
        result.push_back(word);
        i = j + len;
    }

    return result;

        

    
};
