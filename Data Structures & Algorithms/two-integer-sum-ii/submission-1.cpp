class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int c=numbers.size()-1;
        int P1=0;
        int P2=c;
        while(P1 < P2 && numbers[P1]+numbers[P2]!=target){
            if(numbers[P1]+numbers[P2]>target){
            P2--;
        }else if(numbers[P1]+numbers[P2]<target){
            P1++;
        }
        }
        if(numbers[P1]+numbers[P2]==target){
            return {P1+1,P2+1};
        }else{
            cout<<"il est impossible d'obtenir la somme";
            return {};
        }
    }
};
