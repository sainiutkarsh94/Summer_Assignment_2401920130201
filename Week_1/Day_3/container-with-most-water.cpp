class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int area = 0;
        int maxarea = 0;

        while (l < r) {
            area = min(height[l], height[r]) * (r - l);
            maxarea = max(maxarea, area);
            if (height[l] > height[r]) {
                r--;
            } else {
                l++;
            }
        }
        return maxarea;
    }
};