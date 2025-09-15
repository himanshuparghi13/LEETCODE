class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>>v(mp.begin(),mp.end());

        sort(v.begin(),v.end() ,[](const pair<char,int>&a ,const pair<char,int>&b){
            return a.second > b.second;
        });
        string st ="";
        for(auto i:v){
            st.append(i.second,i.first);
            cout<<i.first<<" "<<i.second<<endl;
        }
        return st;
    }
};