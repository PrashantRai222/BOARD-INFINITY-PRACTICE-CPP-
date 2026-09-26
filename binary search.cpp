int search(int arr[], int target, int n){
    int left=0;
    int right=n-1;

    while(left<=right){
        int mid=(left+(right-left))/2;
        if (mid==target){
            return mid;
        }
        else if(mid<target){
            mid=left+1;
        }
        else{
            mid=right-1;
        }
    }
    return -1;
}
