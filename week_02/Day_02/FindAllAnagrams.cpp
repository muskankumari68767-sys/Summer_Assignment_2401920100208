class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        string target = p;
        sort(target.begin(), target.end());

        int k = p.size();

        for(int i = 0; i <= s.size() - k; i++) {

            string temp = s.substr(i, k);

            sort(temp.begin(), temp.end());

            if(temp == target)
                ans.push_back(i);
        }

        return ans;
    }
};
