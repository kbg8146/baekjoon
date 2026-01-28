#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    char color[51][51];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> color[i][j];
        }
    }
    for(int k=0;k<n-8;k++){
        for(int l=0;l<m-8;l++){
            for(int i=k;i<k+8;i++){
                for(int j=k;j<k+8;j++){
                    cout << color[i][j];
                }
                cout << "\n";
            }
        }
    }

    return 0;
}