int maxArea(int* height, int heightSize) {

    int left = 0;
    int right = heightSize - 1;
    int maxArea1 = 0;

    while (left < right) {

        int area = MIN(height[left], height[right]) * (right - left);

        if (area > maxArea1) {
            maxArea1 = area;
        }

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxArea1;
}
