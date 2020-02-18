// Change in the given string itself. So no need to return or print the changed string.

void pairStar(char input[]) {

if (input[1]=='\0')
    return;
    

int size;
for (size=0;input[size]!='\0';++size);
    
    
if (input[0]==input[1])
{
  for (int i=size; i>0;--i)
      input[i+1]=input[i];
    
  input[1]='*';
}
   

    
pairStar (input+1);
    
    
}