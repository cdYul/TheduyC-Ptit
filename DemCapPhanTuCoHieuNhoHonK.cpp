#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;
using ll = long long;
int upper(int a[], int l, int r, int k){
    int h = l;
    int idx  = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] < k){
            idx = mid - h + 1;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return idx;
}
int main(void){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int i =0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        ll ans = 0;
        for(int i =0; i < n; i++){
            int p = upper(a, i+ 1, n - 1, k +a[i]);
            if(p == -1) p = 0;
            ans += 1ll*p;
        }
        cout << ans << endl;
    }
    return 0;
}
