#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int size[6]={0};
    for(int i=0;i<6;i++){
        cin >> size[i];
    }
    int T, P;
    cin >> T >> P;

    int cnt = 0,number=0;
    for(int i=0;i<6;i++){
        if(size[i]==0) continue;
        else{
            size[i] = size[i]-1;
            cnt += size[i]/T+1;
        }
    }
    cout << cnt << "\n";

    int ans1 = n/P;
    int ans2 = n%P;
    cout << ans1 << " " << ans2;

    return 0;
}