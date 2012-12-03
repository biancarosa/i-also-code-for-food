#include <iostream>
using namespace std;

bool isPrime[164000];
int primes[150001];

unsigned int fillPrimes(){
    for (unsigned int i = 0; i < 164000; ++i) {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for (unsigned int i = 2; i < 164000; ++i) {
        if (isPrime[i]){
           for (unsigned int j = 2; i * j < 164000; ++j){
               isPrime[i*j] = false;
           }
        }
    }
    int j = 0;
    for (unsigned int i = 2; i < 164000; ++i) {
      if (isPrime[i]){
      	 primes[j++] = i;
      }
    }
    return 0;
}

int main() {
  fillPrimes();
  int k, n;
  cin >> k;
  for (int i = 0; i < k; ++i) {
  	cin >> n;  	
  	cout << primes[n-1] << endl;
  }
  return 0;
}