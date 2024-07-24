
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+n,greater<long long int>());
        int j = n-1;
        for(int i=0;i<=j;i++,j--){
            if((a[i]+b[i])<k || a[j]+b[j]<k){
                return false;
            }
        }
        return true;
    }
};

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        long long a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        Solution ob;
        cout << ob.isPossible(a, b, n, k) << endl;
    }
    return 0;
}