# include <stdio.h>
# include <string.h>

int lengthOfLongestSubstring(char* s) { //as this is not a Hash-Table approach, thus it has a worst case time complexity of O(n^3).
    int count = strlen(s);
    int max = 0;
    for (int i = 0; i < count; i++)
    {
        int flag = 1;
        for (int j = i+1; j < count; j++)
        {   int r = 0;
            for(int k = i; k < j; k ++){
                if(s[j] == s[k]){
                    r = 1; break;
                }
            }
            if(r == 1){
                break;
            }
            flag ++;
        }
        if(max < flag){
            max = flag;
        } 
    }
    return max;  
}