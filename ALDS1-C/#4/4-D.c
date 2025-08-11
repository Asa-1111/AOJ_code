#include<stdio.h>
#define MAX 1000000001

int w[100001];

int main() {
    int n, k, i;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) scanf("%d", &w[i]);
    int l = 0, r = MAX;
    int ans = MAX;
    while(l + 1 < r) {
        int mid = (l + r)/ 2;
        int sum = 0, cnt = 0, max = 0;
        for(i=0; i<n; i++) {
      if(sum+w[i]>mid) {
	if(cnt<k-1) {
	  cnt++;
	  sum=0;
	}
      }
      sum+=w[i];
      if(max<sum) max=sum;
    }
    if(ans>max) ans=max;
    if(max<=mid) r=mid;
    else l=mid;
  }
  printf("%d\n",ans);
  return 0;
}