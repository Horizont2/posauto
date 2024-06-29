#include <iostream>
#include <vector>

using namespace std;

void deleteColumn(vector<vector<int>>& matrix, int index) {
    for (int i = 0; i < matrix.size(); ++i) {
        matrix[i].erase(matrix[i].begin() + index);
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int columnIndexToDelete = 1;
    
    deleteColumn(matrix, columnIndexToDelete);

    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
