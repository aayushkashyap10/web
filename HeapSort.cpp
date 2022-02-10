#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int> 
#define vii vector<pii>
#define vvi vector<vector<int>>
#define rep(i,a,b) for(int i = a;i<b;i++)
#define ff first
#define ss second

void heapify(vi &a,int n,int st){
    int maxIdx = st,
        l = (2*st) + 1,
        r = (2*st) + 2;
    if(l<n and a[l] > a[maxIdx]){
        maxIdx = l;
    }
    if(r<n and a[r] > a[maxIdx]){
        maxIdx = r;
    }
    if(maxIdx != st){
        swap(a[st],a[maxIdx]);
        heapify(a,n,maxIdx);
    }
}

void heapsort(vi &a){
    int n = a.size();
    for(int i = n/2 - 1;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i = n-1;i>0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

int main(){
    int n;
    cin>>n;

    vi a;

    rep(i,0,n){
        cin>>a[i];
    }

    heapsort(a);

    rep(i,0,n){
        cout<<a[i]<<" ";
    }
}