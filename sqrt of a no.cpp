// { Driver Code Starts
#include<iostream>
using namespace std;

   // } Driver Code Ends

long long int floorSqrt(long long int x) 
{
    if (x < 2) {
        return x;
    }
    long long int mid;
    long long int s=0;
    long long int e=x/2;
    int result;
    while(s<=e){
        mid=(s+(e-s)/2);
        long long sqr=mid*mid;
        if(sqr==x){
            return mid;
        }
        
        else if(sqr<x){
            s=mid+1;
            result=mid;
        }
        else{
            e=mid-1;
        }
       
    }
    return result;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
	    cout<<floorSqrt(n);
		
	}
    return 0;   
}
  // } Driver Code Ends