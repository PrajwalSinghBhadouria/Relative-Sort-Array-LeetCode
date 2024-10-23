class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        map<int,int> mp;
        for(int i=0; i<arr1.size(); i++){
            mp[arr1[i]]++;
        }
        for(int i=0; i<arr2.size(); i++){
            for(int j=0; j<mp[arr2[i]]; j++){
                v.push_back(arr2[i]);
                
            }
            mp[arr2[i]]=0;
        }
        for(auto i:mp){
            for(int j = 0; j<i.second; j++){
                v.push_back(i.first);
            }
        }
        return v;
    }
};
