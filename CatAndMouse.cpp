#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=4e5+10;
int n,k,t;
int q[N];
int main() {
		scanf("%d%d",&n,&k);
		memset(q,0,sizeof(q));
		for (int i = 0; i < k; i++) scanf("%d",&q[i]);
		sort(q, q + k);
		reverse(q,q+k);
		int step = n, cnt = 0;
		for (int i = 0; i < k; i++) {
			int now_step=n-q[i];
			step -=now_step;
			if (step <= 0)break;
			cnt++;
		}
		cout << cnt << endl;
	return 0;
}
