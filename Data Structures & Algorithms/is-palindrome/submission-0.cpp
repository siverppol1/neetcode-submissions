class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true;
        char *p1=&s[0];
        char *p2=&s[s.size()-1];
        while(p1<p2 && isalnum(*p1) &&isalnum(*p2)){
            if(*p1!=*p2)
            return false;
            
            p1++;
            p2--;


        }
        return true;

       


    }
        
    
    
};
