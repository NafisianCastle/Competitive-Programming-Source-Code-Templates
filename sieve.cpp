vector<int> primes, factorization;
void sieve(int n) {
	vector<bool> visited(n + 1);
	for (int i = 3; 1LL * i * i <= n; i += 2) {
		if (!visited[i]) {
			for (int k = i * i; k <= n; k += i << 2)
				visited[k] = 1;
		}
	}
	primes.pb(2);
	for (int i = 3; i <= n; i += 2) {
		if (!visited[i])
			primes.pb(i);
	}
}
