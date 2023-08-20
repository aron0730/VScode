class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt = 0;
        int push_cnt = 0;
        vector<char> s;
        if (chars.size() == 1) {
            return 1;
        }
        for (int i = 0; i < chars.size(); ) {
            cnt = 1;
            while(i + cnt < chars.size() && chars[i] == chars[i + cnt]) {
                cnt++;
            }
            s.push_back(chars[i]);
            push_cnt++;
            if(cnt != 1) {
                string a_str = to_string(cnt);
                for (char c:a_str) {
                    s.push_back(c);
                    push_cnt++;
                }
            }
            i = i + cnt;
        }
        chars = s;
        return push_cnt;
    }
};