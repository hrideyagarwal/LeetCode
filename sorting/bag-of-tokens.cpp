class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int l=0;
        int r = tokens.size()-1;
        int score =0;
        int maxscore= INT_MIN;
        while(l<=r){
if(power>=tokens[l]){
power-= tokens[l];
score++; l++;
}
else {
    power+=tokens[r];
    score--;r--;
}
maxscore=max(maxscore,score);
        }
        if(maxscore<0) maxscore=0;
        return maxscore;
    }
};