#include<bits/stdc++.h>
using namespace std;
int h,w,a,b;
char g[1000][1000];
int main() {
	memset(g,'0',sizeof(g));
	cin>>h>>w>>a>>b;
	for(int i=0; i<h; i++) {
		for(int j=0; j<w; j++) {
			if((i<b)^(j<a))g[i][j]='1';
		}
	}
	for(int i=0; i<h; i++) {
		for(int j=0; j<w; j++) {
			cout<<g[i][j];
		}
		cout<<endl;
	}
	return 0;
}
