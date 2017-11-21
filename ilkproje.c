#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
/*
    int fabrika [2][5],ek[2][5];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d. Fabrikanin %d. iscisi :",i+1,j+1); 
            scanf("%d",&fabrika [i][j]);
            if(fabrika[i][j]>0  && fabrika[i][j]<1000 )
            fabrika[i][j]+=fabrika[i][j]*0.1;
        }

    }
   
       printf("\n************************\n");
       
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d. Fabrikanin %d. iscisi :%d TL\n",i+1,j+1,fabrika[i][j]); 
            
        }
            
    }
    */
    
    int okul[2][2][5],gecti=0;
    
    for(int i=0; i<2; i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<5;k++)
            {
                printf("%d. okulun %d. sinifin %d. ogrencinin notu :",i+1,j+1,k+1); scanf("%d",&okul[i][j][k]);
                if(okul[i][j][k]>50)
                {
                    gecti++;
                }
            }
        }
    }
    
    printf("\n\n********************\n\n");
    
      for(int i=0; i<2; i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<5;k++)
            {
                printf("%d. okulun %d. sinifin %d. ogrencinin notu : %d\n",i+1,j+1,k+1,okul[i][j][k]); 
                
            }
        }
    }
    printf("Gecen ogrenci sayisi :%d\n",gecti);
    
    
    
    
    
    return 0;
}

