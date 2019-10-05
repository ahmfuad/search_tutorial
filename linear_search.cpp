#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int n = sizeof(a);
	int x=9;
	for(int i=0;i<n;i++) {
		if(a[i]==x) {
			cout << "I got the number. "; 
			cout << "It is in " << i << " th position.";  
			return 0;
			
		}
	}
	cout << -1 << endl;
	return 0;
}
