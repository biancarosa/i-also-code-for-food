#include <stdio.h>
#include <list>
using namespace std;

int main() {
   int n;
   list<int> divisors;
 //  while (scanf("%d",&n) != EOF){
   for (int t = 0; t <= 100; ++t) {
      n = t;
      divisors.clear();
      if (n == 0) {
         printf("10\n");
      } else if (n == 1) {
      	 printf("1\n");
      } else {
        int i = 9;
   	while (n > 0 && i > 1) {
   	  if (n%i == 0) {
   	     divisors.push_front(i);
   	     n/=i;
   	  }  else {
   	     --i;
   	  }	      
   	}
   	if (n != 1) {
   	   divisors.push_front(-1);
   	}
   	list<int>::iterator it;
   	divisors.sort();
   	for (it = divisors.begin(); it != divisors.end(); ++it) {
   	   printf("%d",*it);
   	   if(*it == -1) break;
   	}
   	printf("\n");
      }
   }
   return 0;   
}