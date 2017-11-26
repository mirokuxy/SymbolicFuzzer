#include <stdio.h>


int main() {

  int n;
  scanf("%d", &n);

  int ans = 100;

  for(int i=0; i<n; i++){
    ans += 1;
  }

  printf("%d\n", ans);

  return ans;
}

