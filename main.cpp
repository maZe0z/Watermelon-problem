#include <bits/stdc++.h>
using namespace std;
int main() {
    sync_with_stdio(NULL);
    cin.tie(NULL);
    int w=0;
    cin >> w;
    if (w%2!=0 || w==2){
        cout << "NO";
    }
    else if (w%2==0){
        cout << "YES";
    }
    return 0;
}
