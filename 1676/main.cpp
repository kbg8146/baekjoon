#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    long res=1;
    int cnt=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        res *=i;
    }
    cout << res << endl;
    string s = to_string(res);
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') cnt++;
    }

    cout << cnt;

    return 0;
}