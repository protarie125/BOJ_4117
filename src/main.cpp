#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, a, b, c;
	cin >> n >> a >> b >> c;
	while (!(0 == n && 0 == a && 0 == b && 0 == c)) {
		auto mx = int{ 0 };
		for (auto i = 0; i < n; ++i) {
			// t1
			auto d = 2 * n;
			if (a <= i) {
				d += i - a;
			}
			else {
				d += i + (n - a);
			}

			// t2
			d += n;
			if (a <= b) {
				d += b - a;
			}
			else {
				d += (n - a) + b;
			}

			// t3
			if (c <= b) {
				d += b - c;
			}
			else {
				d += b + (n - c);
			}

			if (mx < d) {
				mx = d;
			}
		}

		cout << mx << '\n';

		cin >> n >> a >> b >> c;
	}

	return 0;
}