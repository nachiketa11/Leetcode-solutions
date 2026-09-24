int smallestIndex(int* nums, int numsSize) {
    for (int i=0;i<numsSize;i++){
   int num=nums[i];
    int sum = 0;
while (num > 0) {
    sum += num % 10;
    num = num / 10;
}
    if(i==sum){
    return i;
    }
   }return -1;
}