#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* result = (int*) malloc(sizeof(int)*2);
    for(int i = 0;i < numsSize;i++){
        for(int j = i + 1;j < numsSize;j++){
            if(nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    free(result);
    return NULL;
}

int main()
{
	int nums[] = {1, 2, 3, 4};
    int numsSize = 4;
    int target = 5;
    int size = 0;
    int* result = twoSum(nums,numsSize,target,&size);
    printf("%d\n",result[0]);
    printf("%d\n",result[1]);
    // int* arr = (int*) malloc(sizeof(int*)*2);  //动态分配一个大小为2的数组
    // arr[0] = 1;
    // arr[1] = 2;
    // for(int i = 0;i < 2;i++){
    //     printf("%d\n",arr[i]);
    // }

    return 0;
}

