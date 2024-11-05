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
        for(int i =0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int l = 0, r = n- 1;
        while(l <= r){
            if(l == r){
                cout << a[l];
            }
            else {
                cout << a[r] <<' ' << a[l] <<' ';
            }
            l++;r--;
        }
        cout << endl;
    }
    return 0;
}



