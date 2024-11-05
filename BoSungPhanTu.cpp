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
        set<int> se;
        int l = 1e4, r = -1e4;
        for(int i =0; i < n; i++){
            int x; cin >> x;
            se.insert(x);
            l = min(l,x);
            r = max(r,x);
        }
        int dem = 0;
        for(int i = l; i <= r; i++){
            if(se.count(i) == 0) dem++;
        }
        cout << dem << endl;
    }
    return 0;
}



