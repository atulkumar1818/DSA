
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int ans = 0;

        while(left < right){
            int min_height = min(height[left],height[right]);
            int width = right - left;
            int area = min_height * width;

            if(area > ans ){
                ans = area;
            }
            if(height[left] < height[right]){
                left++;
            }
            else right--;
        }
        return ans;
    }
};
