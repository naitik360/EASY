class Solution {
public:
    int prefixCount(vector<string>& v, string s) {
        int cnt=0;
        for(auto i : v)
        {
            if(i.find(s)!=string::npos && i.find(s)==0)
            {
                cnt++;
            }
                
        }
        return cnt;
    }
};