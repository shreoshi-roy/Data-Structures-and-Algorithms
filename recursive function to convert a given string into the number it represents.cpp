int stringToNumber(char input[]) {

int i,num;
for (i=0;input[i]!='\0'; ++i);    
int digit= input[0]-48;                    //ASCII value of '1' is 49   
    
if (i==1)
{
  return digit;  
}
    
   

num= digit*10;
    
       
    
for (int j=0;j<i-2;++j)
  num= num*10;   
    
    
int answer= num+ stringToNumber (input+1);
return answer;
    
    
}


