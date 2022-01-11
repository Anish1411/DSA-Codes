// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int result=nums[s];
        int e=nums.size()-1;
        int mid;
        while(s<=e){
            mid=(s+(e-s)/2);
            if(mid<e && nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }
            else if(mid>s && nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid]<=nums[s]){
                e=mid-1;
            }
            else{
                
                s=mid+1;
                
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
    	Solution ob;
    	int ans = ob.findMin(nums);
    	cout << ans << "\n";
    }
	return 0;
}

  // } Driver Code Ends