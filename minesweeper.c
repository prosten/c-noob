#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int main() {
    int a,b,i,j,starcount=0;
    scanf_s("%d %d",&a,&b);
    char **c = malloc(sizeof(char*)*a);
     for(i=0;i<a;i++){
     c[i]=malloc(sizeof(char)*b);
     memset(c,0,sizeof(char)*b);
}
    for(i=0;i<a;i++){
    fseek(stdin,0,SEEK_END); 
    scanf_s ("%s",c[i]);//<-I want to fix to get strings.
    printf("%s\n",c[i]);//<-For confirmation
}
         //condition formula: Is there any problem? if so, plz mention to me :)
		 for(i=1;i<=(a-2);i++){
             for(j=1;j<=(b-2);j++){
         if(c[i][j]=='.'){
             if((c[i][j-1]=='*')||(c[i][j+1]=='*')||(c[i-1][j-1]=='*')||(c[i-1][j]=='*')||(c[i-1][j+1]=='*')||(c[i+1][j-1]=='*')||(c[i+1][j]=='*')||(c[i+1][j+1]=='*'))
             starcount++;
             c[i][j]=starcount;
        }//1
          if(c[0][j]=='.'){
             if((c[0][j-1]=='*')||(c[0][j+1]=='*')||(c[1][j-1]=='*')||(c[1][j]=='*')||(c[1][j+1]=='*'))
             starcount++;
             c[0][j]=starcount;
         }//2
          if(c[i][0]=='.'){
         if((c[i-1][0]=='*')||(c[i+1][0]=='*')||(c[i-1][1]=='*')||(c[i][1]=='*')||(c[i+1][1]=='*'))   
         starcount++;
         c[i][0]=starcount;
         }//3
         
         if(c[i][b-1]=='.'){
             if((c[i-1][b-1]=='*')||(c[i+1][b-1]=='*')||(c[i-1][b-2]=='*')||(c[i+1][b-2]=='*')||(c[i][b-2]=='*'))   
             starcount++;
             c[i][b-1]=starcount;
         }//6
         
         if(c[a-1][j]=='.'){
         if((c[a-1][j-1]=='*')||(c[a-1][j+1]=='*')||(c[a-2][j-1]=='*')||(c[a-2][j]=='*')||(c[a-2][j+1]=='*'))
             starcount++;
             c[i][b-1]=starcount;   
         }//9
         
         }
         }
            if(c[0][0]=='.'){
             if((c[0][1]=='*')||(c[1][0]=='*')||(c[1][1]=='*'))
             starcount++;
             c[0][0]=starcount;
         } //4
         if(c[0][b-1]=='.'){
             if((c[0][b-2]=='*')||(c[1][b-1]=='*')||(c[1][b-2]=='*'))
             starcount++;
             c[0][b-1]=starcount;
         }//5
         if(c[a-1][0]=='.'){
             if((c[a-1][1]=='*')||(c[a-2][0]=='*')||(c[a-2][1]=='*'))
             starcount++;
             c[a-1][0]=starcount;
         }//7
         if(c[a-1][b-1]=='.'){
             if((c[a-1][b-2]=='*')||(c[a-2][b-1]=='*')||(c[a-2][b-2]=='*'))
             starcount++;
              c[a-1][b-1]=starcount;
         }//8
         
         printf("\n");
    for(i=0;i<a;i++){
            printf("%s",c[i]);
    }
    for(i=0;i<a;i++)
    free(c[i]);
    free(c);
           
     return 0;
}

