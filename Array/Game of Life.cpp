class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int cnt=0;
                for(int k=i-1;k<=i+1;++k){
                    for(int l=j-1;l<=j+1;++l){
                        if(k==i && l==j) 
                          continue;
                        if(k>=0 && k<n && l>=0 && l<m && (board[k][l]==1 || board[k][l]==3)){
                            cnt++;
                        }
                    }
                }

                if(board[i][j]==1 && (cnt<2 || cnt>3)){
                    board[i][j]=3;
                }
                if(board[i][j]==0 && cnt==3){
                    board[i][j]=2;
                }
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(board[i][j]==3){
                    board[i][j]=0;
                }
                if(board[i][j]==2){
                    board[i][j]=1;
                }
            }
        }
    }
};