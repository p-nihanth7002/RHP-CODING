import java.util.Scanner;

class Solution {
    public int numIslands(char[][] grid) {
        int row = grid.length;
        int col = grid[0].length;
        int islands = 0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == '1'){
                    islands++;
                    dfs(grid, row, col, i, j);
                }
            }
        }
        return islands;
    }

    int[][] diff = {{0,-1},{0,1},{-1,0},{1,0}};
    public void dfs(char[][] grid, int row, int col, int i, int j){
        grid[i][j] = '0'; // mark visited
        for(int k=0; k<4; k++){
            int newRow = i + diff[k][0];
            int newCol = j + diff[k][1];
            if(newRow >= 0 && newRow < row && newCol >= 0 && newCol < col && grid[newRow][newCol] == '1'){
                dfs(grid, row, col, newRow, newCol);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input dimensions
        int row = sc.nextInt();
        int col = sc.nextInt();
        char[][] grid = new char[row][col];
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                grid[i][j] = sc.next().charAt(0);
            }
        }
        sc.close();
        Solution sol = new Solution();
        int result = sol.numIslands(grid);
        System.out.println("Number of islands: " + result);
    }
};
