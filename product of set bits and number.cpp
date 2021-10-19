 int bitMultiply(int N){
        int x=N;
        int c=0;
        int y;
        while(N!=0){
            y=N&1;
            if(y==1)c++;
            N=N>>1;
            
        }
        return c*x;                                                 """product of set bits and number"""
