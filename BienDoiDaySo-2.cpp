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
        ll a[n], b[n];
        for(int i =0; i  < n; i++) cin >> a[i];
        b[0] = a[0]*a[1];
        b[n-1] = a[n-1]*a[n-2];
        for(int i = 1; i < n-1; i++){
            b[i] = a[i-1]*a[i+1];
        }
        for(auto x : b) cout << x << ' ';
        cout << endl;
    }
    return 0;
}

