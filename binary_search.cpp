// binary search code implementation
#include <bits/stdc++.h>
using namespace std;

int main() {

	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int L = 0, R = 14,x=9;
  int cnt=0;
  while(L<=R) {
    cnt++;
    int M = (L+R)/2;
	if(a[M]==x) {
		cout << "I got the number. "; 
		cout << "It is in " << M << " th position."; 
		return 0;
		
	}
	else if(x>a[M]) L = M+1;
	else {
		R = M-1;
	}
  }
  cout << "No it is not here"<< endl;
 // cout << cnt << endl;
  return 0;
}
