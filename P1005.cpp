#include <stdio.h>
#include <string.h>

#define MAX 2001000

using namespace std;

int m[MAX];

int main() {
   int t, sum, n, j, i;
   
   memset(m, 0, MAX * sizeof(int));
   t = sum = 0;
   m[0] = 1;
   
   scanf("%d",&t);
   for (i = 0; i < t; ++i) {
      scanf("%d", &n);
      sum += n;
      for (j = sum; j >= n; --j) if(m[j-n]) m[j] = 1;
   }
   for(i=sum/2; i>=0; --i) if(m[i]) break;
   printf("%d\n", sum-2*i);
   
   return 0;
}