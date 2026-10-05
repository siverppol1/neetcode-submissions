class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<double>distance(position.size());
        vector<double>time(position.size());
        map<int,double>trie;
        stack<double>lestack;

        for(int i=0;i<position.size();i++){
            int distances=target-position[i];
            distance[i]=distances;

        }
        for(int i=0;i<distance.size();i++){
            double times=distance[i]/speed[i];
            time[i]=times;
        }
        for(int i=0;i<position.size();i++){
            trie[position[i]]=time[i];
        }
         double plusGrandeVal = trie.rbegin()->second;
        for (auto it = trie.rbegin(); it != trie.rend(); ++it) {
            if(lestack.empty()){
                lestack.push(plusGrandeVal);
            }
            else{
                double valeurActuelle = it->second;
             if(lestack.top()<valeurActuelle){
                lestack.push(valeurActuelle);
             }
            }
              

         }



        
        return lestack.size();



        



        
    }
};
