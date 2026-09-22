class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> st(n);
        int top = -1;
        int ans = 0;

        for (int i = 0; i <= n; i++) {
            int curr = (i == n ? 0 : heights[i]);

            while (top >= 0 && heights[st[top]] > curr) {
                int h = heights[st[top--]];

                int width = (top < 0) ? i : i - st[top] - 1;

                ans = max(ans, h * width);
            }

            if (i < n)
                st[++top] = i;
        }

        return ans;
    }
};