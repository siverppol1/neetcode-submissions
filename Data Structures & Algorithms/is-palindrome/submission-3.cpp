class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true;
        char *p1=&s[0];
        char *p2=&s[s.size()-1];
        while(p1<p2 ){
            while(p1<p2 && !isalnum(*p1)){
            p1++;
            }
            while(p1<p2 && !isalnum(*p2)){
            p2--;
            }

            if(tolower(*p1)!=tolower(*p2))
            return false;
            
            p1++;
            p2--;



        }
        return true;

       


    }
        
    
    
};
