#include <iostream>
#include <vector>

using namespace std;

void deleteRow(vector<vector<int>>& matrix, int index) {
    matrix.erase(matrix.begin() + index);
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int indexToDelete = 1;
    deleteRow(matrix, indexToDelete);

    for (const auto& vec : matrix) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
