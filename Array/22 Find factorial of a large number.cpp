#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> v(1,1);
        for(int k=2;k<=n;k++){
            int temp=0,lol;
            for(int i=0;i<v.size();i++) lol=v[i]*k+temp,v[i]=lol%10,temp=lol/10;
            while(temp) v.push_back(temp%10),temp/=10;
        }
        for(int i=v.size()-1;i>=0;i--) cout << v[i];
        cout << endl;
	}
	return 0;
}
