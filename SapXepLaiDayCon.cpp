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
        int a[n];
        vector<int> v;
        for(int i =0; i < n; i++){
            cin >> a[i];
            v.push_back(a[i]);
        }
        sort(a, a+n);
        int l,r;
        for(int i =0; i < n; i++){
            if(a[i] != v[i]){
                l = i +1;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--){
            if(a[i] != v[i]){
                r = i + 1;
                break;
            }
        }
        cout << l <<' ' << r << endl;
    }
    return 0;
}



