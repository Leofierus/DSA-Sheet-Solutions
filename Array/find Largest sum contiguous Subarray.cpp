int maxSubarraySum(int arr[], int n){
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>0) sum+=arr[i],count=max(sum,count);
        else count=max(sum,count), sum=0;
    }
    return count;
}
