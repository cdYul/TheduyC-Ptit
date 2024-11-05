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
        int n, m; cin >> n >> m;
        set<int> giao,hop;
        for(int i =0; i < n; i++){
            int x; cin >> x;
            hop.insert(x);
        }
        for(int i =0; i < m; i++){
            int x; cin >> x;
            if(hop.count(x) != 0){
                giao.insert(x);
            }
            else{
                hop.insert(x);
            }
        }
        for(auto x : hop) cout << x <<' ';
        cout << endl;
        for(auto x : giao) cout << x <<' ';
        cout << endl;
    }
    return 0;
}



