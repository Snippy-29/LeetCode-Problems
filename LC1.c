# include <stdio.h>
# include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
    int *rs = (int *)malloc(2*sizeof(int));
    if(rs == NULL || numsSize<2 || nums == 0){
        *returnSize = 0;
        return NULL;
    }

    for(i = 0; i<numsSize; i++){
        for(j = i+1;j<numsSize;j++){
            if(nums[i] + nums[j] == target){
                *returnSize = 2;
                rs[0] = i;
                rs[1] = j;
                return rs;
            }
        }
    }

    *returnSize = 0;
    free(rs);
    return NULL;
}