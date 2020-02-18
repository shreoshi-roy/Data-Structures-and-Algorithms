void replacePi(char input[]) {

if (input[1]=='\0')
    return;
    
if (input[0]=='p' && input[1]=='i')
{
   
    int i;
    for (i=0;input[i]!='\0'; ++i);
    int size=i;
    
    for (int i= size; i>0; --i)
    {
        input[i+2]=input[i];
        
    }
   
       
    input[0]='3';
    input[1]='.';
    input[2]='1';
    input[3]='4';
}
    
    
replacePi (input+1);
}


