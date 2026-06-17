class Solution {
public:
    string longestPalindrome(string s) {

        string ans = "";

        for(int i = 0; i < s.size(); i++) {

            for(int j = i; j < s.size(); j++) {

                string temp = s.substr(i, j - i + 1);

                string rev = temp;

                reverse(rev.begin(), rev.end());

                if(temp == rev && temp.size() > ans.size())
                    ans = temp;
            }
        }

        return ans;
    }
};
