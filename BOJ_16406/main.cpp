#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n;
string f, u;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n >> f >> u;

	const auto v = static_cast<int>(f.length());
	const auto m = v - n;

	auto eq = int{ 0 };
	auto df = int{ 0 };
	for (auto i = 0; i < v; ++i) {
		if (f[i] == u[i]) {
			++eq;
		}
		else {
			++df;
		}
	}

	cout << min(n, eq) + min(m, df);

	return 0;
}