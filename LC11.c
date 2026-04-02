# include <stdio.h>
# include <math.h>

// Brute-Force --Time Complexity=O(n^2), giving time limit exceeded.
int maxArea(int* height, int heightSize) {  //height = [1,8,6,2,5,4,8,3,7]  ,  height = [1,1]
    int i,j, m = 0;
    for(i = 0; i < heightSize; i++){
        for(j = 1+i; j < heightSize; j++){
            int width = j - i;
            int h = (height[j] > height[i]) ? height[i] : height[j];

            int c = width * h;

            if(c > m){
                m = c;
            }
        }
    }

    return m;
}

//2 pointer method, time complexity = O(n)
int maxArea(int* height, int heightSize) {  //height = [1,8,6,2,5,4,8,3,7]  ,  height = [1,1]
    int left = 0, right = heightSize-1, m = 0;
    while(left < right){
        int width = right - left;
        int h = (height[left] > height[right] ? height[right] : height[left]);

        int c = width*h;

        if(c > m){
            m = c;
        }

        if(height[right] > height[left]){
            left++;
        }
        else{
            right--;
        }
    }
    return m;
}