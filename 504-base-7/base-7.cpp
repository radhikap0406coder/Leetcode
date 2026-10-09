class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        string ans = "";
        bool negative = num < 0;

        num = abs(num);

        while (num > 0) {
            int rem = num % 7;
            ans += to_string(rem);
            num /= 7;
        }

        reverse(ans.begin(), ans.end());

        if (negative) {
            ans = "-" + ans;
        }

        return ans;
    }
};