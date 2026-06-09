import java.util.Scanner;
class Solution {
    public int longestIncreasingPath(int[][] matrix) {
        int R = matrix.length;
        int C = matrix[0].length;
        int longest = 0;
        int[][] arr = new int[R][C];
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                int path = dfs(matrix,R,C,i,j,arr);
                longest = Math.max(longest,path);
            }
        }
        return longest;
    }

    int diff[][] = {{0,-1},{0,1},{-1,0},{1,0}};
    public int dfs(int[][] matrix, int R, int C, int i, int j, int[][] arr){
        if(arr[i][j]!=0){
            return arr[i][j];
        }
        int Adjmax=0;
        for(int k=0;k<4;k++){
            int ar=i+diff[k][0];
            int ac=j+diff[k][1];
            if(ar>=0 && ar<R && ac>=0 && ac<C && matrix[ar][ac]>matrix[i][j]){
                Adjmax = Math.max(Adjmax,dfs(matrix,R,C,ar,ac,arr));
            }
        }
        arr[i][j]=Adjmax+1;
        return Adjmax+1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();
        int[][] matrix = new int[R][C];
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                matrix[i][j] = sc.nextInt();
            }
        }
        sc.close();
        Solution sol = new Solution();
        int result = sol.longestIncreasingPath(matrix);
        System.out.println(result);
    }
}
