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
        for(int i =0; i < n; i++) cin >> a[i];
        int dem  =0;
        for(int i = 0; i< n -1; i++){
            if(a[i] != 0 && a[i] == a[i +1]){
                a[i] *= 2;
                a[i + 1] = 0;
            }
        }
        for(int i =0; i < n; i++){
            if(a[i] != 0) cout << a[i] <<' ';
            else dem++;
        }
        for(int i =0; i < dem; i++) cout <<"0 ";
        cout << endl;
    }
    return 0;
}



