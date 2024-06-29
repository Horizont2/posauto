#include <iostream>
#include <vector>

using namespace std;

void addColumn(vector<vector<int>>& matrix, const vector<int>& column, int pos) {
    for (int i = 0; i < matrix.size(); ++i) {
        matrix[i].insert(matrix[i].begin() + pos, column[i]);
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> newColumn = {10, 11, 12};
    int position = 1;
    
    addColumn(matrix, newColumn, position);

    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
