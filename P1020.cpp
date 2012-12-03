#include <stdio.h>
#include <math.h>

using namespace std;

double distanceBetweenTwoPoints(double x1, double y1, double x2, double y2) {
  return sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
}
struct pair{
   double x;
   double y;
};

double PI = acos((double)-1);

int main() {
   int n;
   pair lastCoordinates, actualCoordinates, firstCordinates;
   double ropeLength, r;
   ropeLength = 0;
   scanf("%d%lf",&n,&r);
   scanf("%lf%lf",&firstCordinates.x,&firstCordinates.y);
   lastCoordinates.x = firstCordinates.x;
   lastCoordinates.y = firstCordinates.y;   
   for (int i = 1; i < n; ++i) {
      scanf("%lf%lf",&actualCoordinates.x,&actualCoordinates.y);
      ropeLength+=distanceBetweenTwoPoints(actualCoordinates.x,actualCoordinates.y,lastCoordinates.x,lastCoordinates.y);
      lastCoordinates.x = actualCoordinates.x;
      lastCoordinates.y = actualCoordinates.y;
   }
      ropeLength+=distanceBetweenTwoPoints(lastCoordinates.x,lastCoordinates.y,firstCordinates.x,firstCordinates.y);
   ropeLength+=2*PI*r;
   printf("%.2lf",ropeLength);
   return 0;
}