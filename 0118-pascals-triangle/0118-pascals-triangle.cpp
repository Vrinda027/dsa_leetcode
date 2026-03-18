class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        // Edge case: if numRows <= 0, return empty triangle
        if (numRows <= 0) {
            return triangle;
        }

        // First row is always [1]
        triangle.push_back({1});

        // Build each row starting from the second
        for (int i = 1; i < numRows; ++i) {
            vector<int> row(i + 1, 1); // Initialize row with 1's

            // Fill the middle values using the previous row
            for (int j = 1; j < i; ++j) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            triangle.push_back(row);
        }

        return triangle;
    }
};