//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        vector<int>ans;
        int count = 0;
        
        while(N > 0)
        {
            int val = N % 2;
            ans.push_back(val);
            
            N = N / 2;
        }
        
        for(int i = 0; i < ans.size(); i++)
        {
            if(ans[i] == 1)
            {
                count++;
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends