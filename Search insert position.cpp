// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid;
        int result;
        while(s<=e){
            mid=(s+(e-s)/2);
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
                result=s;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
        }
        return result;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>nums(n);
    	for(int i = 0; i < n; i++)
    		cin>>nums[i];
        int target;
        cin>>target;
    	Solution ob;
    	int ans = ob.searchInsert(nums , target);
    	cout << ans << "\n";
    }
	return 0;
}

  // } Driver Code Ends