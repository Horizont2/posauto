#include <iostream>
#include <vector>

using namespace std;

void pRow(vector<vector<int>>& matrix, const vector<int>& row) {
    matrix.insert(matrix.begin(), row);
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}};
    vector<int> newRow = {7, 8, 9};
    pRow(matrix, newRow);

    for (const auto& vec : matrix) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
