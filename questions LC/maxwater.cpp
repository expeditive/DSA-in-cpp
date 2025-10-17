#include<iostream>
#include<vector>

using namespace std;

int maxArea(vector<int>& height) {
    vector<int> x;
    for (int i = 0; i < height.size(); i++) {
        for (int j = i + 1; j < height.size(); j++) {

            if (height[i] > height[j]) {
                x.push_back((j - i) * height[j]);
            } else if (height[j] > height[i]) {
                x.push_back((j - i) * height[i]);
            } else {
                x.push_back((j - i) * height[i]);
            }
        }
    }
    int max = 0;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] >= max) {
            max = x[i];
        } 
    }

    return max;
}
