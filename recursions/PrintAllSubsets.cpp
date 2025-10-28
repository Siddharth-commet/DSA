#include <iostream>
#include <vector>
using namespace std;

void ps(vector<int> &arr1, vector<int> &ans, int i) {
    if (i == arr1.size()) {
        for (int j = 0; j < ans.size(); j++) {
            cout << ans[j] << " ";
        }
        cout << endl;
        return;
    }

    ans.push_back(arr1[i]);
    ps(arr1, ans, i + 1);

    ans.pop_back();
    ps(arr1, ans, i + 1);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> res;
    ps(arr, res, 0);
    return 0;
}
