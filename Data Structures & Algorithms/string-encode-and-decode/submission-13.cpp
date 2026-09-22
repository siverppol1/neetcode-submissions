class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string="";
        for(int i =0;i<strs.size();i++){
            encoded_string +=to_string(strs[i].length())+'#'+strs[i];
            
                  
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
    vector<string> decoded_strs;
        int i = 0;
      while(i<s.size()){
        size_t position=s.find('#',i);
        int chiffre= stoi(s.substr(i,position-i));
        decoded_strs.push_back(s.substr(position + 1, chiffre));
        i = position + 1 + chiffre;     
      }
      return decoded_strs;
    }
};
