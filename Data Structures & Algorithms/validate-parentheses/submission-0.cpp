class Solution {
public:
    bool isValid(string s) {
        stack<char>ourstack;
        for(char c:s){
            if(c=='{'||c=='['||c=='('){
                ourstack.push(c);           
            }else if(c=='}'||c==']'||c==')'){
                if(ourstack.empty())
                return false;
                char top=ourstack.top();

            
              if((c==')' && top=='(')||(c=='}' && top =='{')||(c==']' && top =='[')){
                ourstack.pop();
               }else{
                return false;
            }
        }
        }
         if(ourstack.empty())
            return true;
            else return false;
        
        
        
        
    }
};
