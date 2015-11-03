#include <iostream>
using namespace std;

int climbStairs(int n) {
	if(n == 2)
		return 2;
	if(n == 1)
		return 1;   
	int dist[n + 1];
	dist[1] = 1;
	dist[2] = 2;
	for (int i = 3; i <= n; i++) {
		dist[i] = dist[i - 1] + dist[i - 2];
	}
	return dist[n];
}

int main() {

	return 0;
}

