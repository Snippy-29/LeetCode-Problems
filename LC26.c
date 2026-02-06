# include <stdio.h>
# include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    int i;
    if(numsSize == 0){
        return 0;
    }
    int k = 1;
    for(i = 1; i<numsSize; i++){
        if(nums[i] != nums){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}