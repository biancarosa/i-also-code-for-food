#include <stdio.h>
#include <math.h>
#include <list>
using namespace std;

int main(){
  long double n;
  double squareRoot;
  list<double> output;
  while (scanf("%Lf",&n) != EOF){
    squareRoot = sqrt(n);
    output.push_front(squareRoot);
  }
  list<double>::iterator it;
  for (it = output.begin(); it != output.end(); ++it) {
  	printf("%.4lf\n",*it);
  }
  return 0;
}