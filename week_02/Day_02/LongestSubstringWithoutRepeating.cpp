class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxi = 0;

        for(int i = 0; i < s.length(); i++) {

            string str = "";

            for(int j = i; j < s.length(); j++) {

                if(str.find(s[j]) != string::npos)
                    break;

                str = str + s[j];

                if(str.length() > maxi)
                    maxi = str.length();
            }
        }

        return maxi;
    }
};
