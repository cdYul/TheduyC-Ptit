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
map<int,int> mp;
int cmp(int a, int b){
    return abs(mp[a]) < abs(mp[b]);
}
int main(void){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n];
        for(int i =0; i < n; i++){
            cin >> a[i];
            mp[a[i]] = x -a[i];
        }
        stable_sort(a,a+n,cmp);
        for(auto x : a) cout << x <<' ';
        cout << endl;
    }
    return 0;
}




