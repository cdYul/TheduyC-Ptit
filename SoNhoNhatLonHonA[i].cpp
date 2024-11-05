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
int upper(int a[], int n, int x){
    int l = 0, r  = n - 1, idx = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] > x){
            idx = mid;
            r = mid - 1;
        }
        else l = mid+ 1;
    }
    return idx;
}
int main(void){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];
        for(int i =0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a+ n);
        for(int i = 0; i < n; i++){
            int p = upper(a,n,b[i]);
            if(p == -1){
                cout <<"_" <<' ';
            }
            else cout << a[p] <<' ';
        }
        cout << endl;
    }
    return 0;
}

