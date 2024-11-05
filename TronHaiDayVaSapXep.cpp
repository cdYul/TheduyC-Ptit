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
        multiset<int> se;
        for(int i =0; i < n; i++){
            int x; cin >> x;
            se.insert(x);
        }
        for(int i =0; i < m; i++){
            int x; cin >> x;
            se.insert(x);
        }
        for(auto x : se) cout << x <<' ';
        cout << endl;
    }
    return 0;
}



