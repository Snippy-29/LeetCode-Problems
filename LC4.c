# include <stdio.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int total = nums1Size+nums2Size;
    int i=0, j=0, k = 0;

    int arr[total];

    while(i<nums1Size && j<nums2Size){
        if(nums1[i] < nums2[j]){
            arr[k] = nums1[i];
            i++;k++;
        }
        else{
            arr[k] = nums2[j];
            j++;k++;
        }
    }
    while(j<nums2Size){
        arr[k++] = nums2[j++];
    }

    while(i<nums1Size){
        arr[k++] = nums1[i++];
    }
    
    if(total%2 == 0){
        return (arr[total/2] + arr[(total/2)-1])/2.0;
    }
    else{
        return arr[(total)/2];
    }
    return 0;
}