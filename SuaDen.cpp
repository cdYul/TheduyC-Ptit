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
    int n, k ,b; cin >> n >> k >> b;
    set<int> se;
    for(int i =1; i <= b; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int cnt = 0;
    for(int i = 1; i <= k; i++){
        if(se.count(i) != 0) cnt++;
    }
    int ans = cnt;
    for(int i = k + 1; i<= n; i++){
        if(se.count(i - k) != 0) cnt--;
        if(se.count(i) != 0) cnt++;
        ans = min(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}



