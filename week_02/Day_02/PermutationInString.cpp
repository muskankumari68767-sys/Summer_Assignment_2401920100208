class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        sort(s1.begin(), s1.end());

        int n = s1.size();

        for(int i = 0; i <= s2.size() - n; i++) {

            string temp = s2.substr(i, n);

            sort(temp.begin(), temp.end());

            if(temp == s1)
                return true;
        }

        return false;
    }
};
