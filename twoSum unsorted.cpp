#include<unordered_set>
bool twoSum(int arr[],int n, int target){
    std::unordered_set<int> seen;

    for(int i=0;i<n;i++){
        int need=target-arr[i];
        if(seen.count(need)){
            return true;
        }
        seen.insert(arr[i]);

    }
    return false;
}