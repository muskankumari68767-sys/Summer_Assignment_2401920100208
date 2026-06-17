
class Solution {
public:
    string decodeString(string s) {

        stack<int> num;
        stack<string> str;

        string current = "";
        int number = 0;

        for(char ch : s) {

            if(isdigit(ch)) {

                number = number * 10 + (ch - '0');
            }

            else if(ch == '[') {

                num.push(number);
                str.push(current);

                number = 0;
                current = "";
            }

            else if(ch == ']') {

                string temp = current;

                current = str.top();
                str.pop();

                int times = num.top();
                num.pop();

                for(int i = 0; i < times; i++)
                    current += temp;
            }

            else {

                current += ch;
            }
        }

        return current;
    }
};
