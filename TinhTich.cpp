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
    int t; cin >>t;
    while(t--){
        int n,m; cin >> n >> m;
        ll cnt1 = -1e8+7, cnt2 = 1e8+7;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x > cnt1) cnt1 = x;
        }
        for(int i =0; i < m; i++){
            int x; cin >> x;
            if(x < cnt2) cnt2 = x;
        }
        cout << cnt1*cnt2 << endl;
    }
    return 0;
}
