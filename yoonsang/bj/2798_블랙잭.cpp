#include <iostream>
#include <vector>

using namespace std;

int main() {

  int numCards = 0;
  int n = 0;
  cin >> numCards >> n;

  int card = 0;
  vector<int> cards;
  cards.reserve(numCards);

  for (int i = 0; i < numCards; ++i) {
    cin >> card;
    cards.push_back(card);
  }

  int last_diff = 9999999;
  int ans = 0;

  for (int i = 0; i < numCards; ++i) {
    for (int j = i + 1; j < numCards; ++j) {
      for (int k = j + 1; k < numCards; ++k) {
        const int sum = cards[i] + cards[j] + cards[k];

        if (sum == n) {
          std::cout << n;
          return 0;
        }

        if (sum > n) {
          continue;
        }

        if (n - sum < last_diff) {
          last_diff = n - sum;
          ans = sum;
        }
      }
    }
  }

  std::cout << ans;

  return 0;
}
