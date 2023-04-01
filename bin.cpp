struct b_search{
    vector<int>v;
    b_search(vector<int>&nums){
        v=nums;
    }
    int find(int x){
        auto it = lower_bound(v.begin(),v.end(),x);
        int idx = (it-v.begin());
        if(it==v.end()){
            return -1;
        }
        else if(v[idx]!=x){
            return -1;
        }
        else{
            return idx;
        }
    }
    int lessthanequalto(int x){
        auto it = lower_bound(v.begin(),v.end(),x+1);
        int idx = (it-v.begin());
        return (idx-1);
    }
    int greaterthenequalto(int x){
        auto it = upper_bound(v.begin(),v.end(),x-1);
        int idx = (it-v.begin());
        return idx;
    }
};
