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
int main(void){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[n];
        for(int i =0; i < n; i++){
            ll x; cin >> x;
            a[i] = x*x;
        }
        sort(a,a + n);
        int ok = 1;
        for(int i = n - 1; i >= 2; i--){
            int l = 0, r  = i - 1;
            while(l < r){
                if(a[l]+ a[r] == a[i]){
                    cout <<"YES"<< endl;
                    ok = 0;
                    break;
                }
                else if(a[l]+a[r] < a[i]) ++l;
                else --r;
            }
        }
        if(ok) cout <<"NO" << endl;
    }
    return 0;
}

