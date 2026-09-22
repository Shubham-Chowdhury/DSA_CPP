class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> ans;
        stack<int> s;
        int size = a.size();

        for (int i = 0; i < size; i++) {
            if (a[i] > 0) {
                s.push(a[i]);
            } else {
                while (!s.empty() && s.top() > 0 && -a[i] > s.top()) {
                    s.pop();
                }
                if (s.empty() || s.top() < 0) {
                    s.push(a[i]);
                }

                if (s.top() == -a[i]) {
                    s.pop();
                }
            }
        }

        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};