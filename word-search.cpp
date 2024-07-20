class Solution {
public:
bool findnext(vector<vector<char>>& board, int y, int x, string& word, int ind) {
    if(ind==word.length()) return true;
    if(y<0 || x<0 || y==board.size() || x==board[y].size()) return false;
    if(board[y][x]!=word[ind]) return false;
    char temp=board[y][x];
    board[y][x]='*';
    bool exist =findnext(board, y, x+1, word, ind+1)
        || findnext(board, y, x-1, word, ind+1)
        || findnext(board, y+1, x, word, ind+1)
        || findnext(board, y-1, x, word, ind+1);
        board[y][x] = temp; 
        return exist;
}

bool exist(vector<vector<char>>& board, string word) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if (findnext(board, i, j, word, 0)) {
                return true;
            }
        }
    }
    return false;
}
};








// Given an m x n grid of characters board and a string word, return true if word exists in the grid.

// The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

 

// Example 1:


// Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
// Output: true
// Example 2:


// Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"
// Output: true
// Example 3:


// Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCB"
// Output: false
 

// Constraints:

// m == board.length
// n = board[i].length
// 1 <= m, n <= 6
// 1 <= word.length <= 15
// board and word consists of only lowercase and uppercase English letters.
