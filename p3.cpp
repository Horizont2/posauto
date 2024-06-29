#include <iostream>
#include <vector>

using namespace std;

void insertRow(vector<vector<int>>& matrix, const vector<int>& row, int pos) {
    matrix.insert(matrix.begin() + pos, row);
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}};
    vector<int> newRow = {7, 8, 9};
    int position = 1;
    insertRow(matrix, newRow, position);

    for (const auto& vec : matrix) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
