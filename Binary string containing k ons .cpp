
// C++ program to find count of substring containing
// exactly K ones
#include <bits/stdc++.h>
using namespace std;

// method returns total number of substring having K ones
int countOfSubstringWithKOnes(string s, int K)
{
	int N = s.length();
	int res = 0;
	int countOfOne = 0;
	int freq[N + 1] = {0};

	// initialize index having zero sum as 1
	freq[0] = 1;

	// loop over binary characters of string
	for (int i = 0; i < N; i++) {

		// update countOfOne variable with value
		// of ith character
		countOfOne += (s[i] - '0');

		// if value reaches more than K, then
		// update result
		if (countOfOne >= K) {

			// add frequency of indices, having
			// sum (current sum - K), to the result
			res += freq[countOfOne - K];
		}

		// update frequency of one's count
		freq[countOfOne]++;
	}
	return res;
}

// Driver code to test above methods
int main()
{
	string s = "10010";
	int K = 1;
	cout << countOfSubstringWithKOnes(s, K) << endl;
	return 0;
}
