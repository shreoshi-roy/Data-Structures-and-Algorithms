int subsetSumToK(int input[], int n, int output[][50], int k) {
    
    if (n==0)
    {
        if (k==0)
        {
            output[0][0]=0;
            return 1;
        }
        
        else 
            return 0;
    }
    
    
    int o1[10000][50], o2[10000][50], s1, s2;
    
    s1= subsetSumToK (input+1, n-1, o1, k);
    s2= subsetSumToK (input+1, n-1, o2, k-input[0]);
    
         
    int row = 0;
    
    for(int i=0;i<s1;i++){
        for(int j=0;j<=o1[i][0];j++)
        {
            output[row][j]=o1[i][j];
        }  
        row++;
    }
    
    for(int i=0;i<s2;i++)
    {
        output[row][0]=o2[i][0]+1;
        output[row][1]=input[0];
        for(int j=1;j<=o2[i][0];j++)
        {
            output[row][j+1]=o2[i][j];
        }
        row++;
    }
    return row;
}
