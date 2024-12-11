#include <bits/stdc++.h>

using namespace std;

void connect(vector<bool>& con, vector<vector<int> >  & grap, int i){
    if(con[i]) return;
    con[i] = 1;
    for(int b=0  ; b < grap[i].size();b++) 
    connect(con, grap, grap[i][b]);
}

int main(){
    int n,j;
     cin >> j>>n;
    vector<vector<int> > vv(j+1,vector<int>(0));
    while(n--){
        int a,b;
        cin>>a >> b;
        vv[a].push_back(b);
        vv[b].push_back(a);
    }
    vector<bool> con(j+1,false);
    connect(con, vv , 1);

    bool cn=false;
    for(int i=1; i<j+1; i++) if(!con[i]){cn=true; cout << i << endl;}
    if(!cn) cout << "Connected" << endl;
}