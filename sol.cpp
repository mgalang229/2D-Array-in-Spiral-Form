#include <bits/stdc++.h>

#define R 3
#define C 6

using namespace std;

void spiralPrint(int m, int n, int a[R][C]) {
	int k = 0, l = 0;
	while(k < n && l < m) {
		for(int i = l; i < n; ++i) {
			cout << a[k][i] << " ";
		}
		k++;
		for(int i = k; i < m; ++i) {
			cout << a[i][n-1] << " ";
		}
		n--;
		if(k < m) {
			for(int i = n - 1; i >= l; --i) {
				cout << a[m-1][i] << " ";
			}
			m--;
		}
		if(l < n) {
			for(int i = m - 1; i >= k; --i) {
				cout << a[i][l] << " ";
			}
			l++;
		}
	}
	cout << "\n";
}

void test_case() {
	int a[R][C] = {{1,2,3,4,5,6},
				   {7,8,9,10,11,12},
				   {13,14,15,16,17,18}};
	spiralPrint(R, C, a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    //int T;
    //cin >> T;
    //for(int nr = 1; nr <= T; ++nr) {
        //test_case();
    //}
    test_case();
    return 0;
}
