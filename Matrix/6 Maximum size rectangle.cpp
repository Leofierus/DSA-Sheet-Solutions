class Solution{
  public:
    int maxHist(int row[],int c) {
        stack<int> result;
        int top_,lol=0,area=0,i=0;
        while(i<c){
            if(result.empty()||row[result.top()]<=row[i]) result.push(i++);
            else {
                top_ = row[result.top()];
                result.pop();
                area=top_*i;
                if(!result.empty()) area=top_*(i-result.top()-1);
                lol=max(area,lol);
            }
        }
        while (!result.empty()) {
            top_=row[result.top()];
            result.pop();
            area=top_*i;
            if(!result.empty()) area=top_*(i-result.top()-1);
            lol=max(area,lol);
        }
        return lol;
    }
    int maxArea(int M[MAX][MAX],int r,int c)
    {
        int result=maxHist(M[0],c);
        for(int i=1;i<r;i++) {
            for(int j=0;j<c;j++) if(M[i][j]) M[i][j]+=M[i-1][j];
            result=max(result,maxHist(M[i],c));
        }
        return result;
    }
};
