void print (int input[], int size, int k, int output[], int m) {
    
    if (size==0)
    {
        if (k==0)
        {
            for (int i=0;i<m;++i)
                cout<<output[i]<<" ";
            cout<<endl;
            return;
        }
        
        else 
           return;
            
    }
    
    
    int temp[1000], i;
    print (input+1,size-1, k, output, m);
     
     for (i=0;i<m;++i)
        temp[i]=output[i];
    temp[i]= input[0];
    
    print (input+1, size-1, k-input[0], temp,m+1);
                  
}