#include <stdio.h>
#include <math.h>

main(){
    int i,j,k,therm,mo,max,max2,town;
    char polh[3][20];
    int temp[3][9];
    therm=0;
    max2=0;
    

    

    for ( i = 0; i <=2; i++)
    {
        printf("please enter the %d city ",i+1);
        scanf("%s",&polh[i]);
        
    }
    

    
    for (int l = 0; l <= 2; l++)
    {   
    
        for ( j = 0; j <= 2; j++)
        {
            printf("please enter the %d temp for the %d polh " ,j+1,l+1);
            scanf("%d" , &temp[l][j]);
            
        }
    
    
    }
     
    
     for ( i = 0; i <=2; i++)
    {
        printf("%s ",polh[i]);
     
    }

    for (int l = 0; l <= 2; l++)
    {   
    
        for ( j = 0; j <= 2; j++)
        {
            printf("%d\n" , temp[l][j]);
            
        }
    
    
    }

    for (int l = 0; l <= 2; l++)
    {   
        mo=0;
        therm=0;
        for ( int p = 0; p <= 2; p++)
        {   
            therm=therm+temp[l][p];
            
            
        }
        mo=therm/3;
        printf("o mo thermokrasias gia thn %s einai: %d \n",polh[l],mo);
    
    }

    for (int l = 0; l <= 2; l++)
    {   
       max=0;
        for ( int p = 0; p <= 2; p++)
        {   
            if (temp[l][p]>max)
            {
                max=temp[l][p];
            }
            
        }
        
        printf("h megisth thermokrasia gia thn %s einai %d \n",polh[l],max);
    
    }


    for (int l = 0; l <= 2; l++)
    {   
        for ( int p = 0; p <= 2; p++)
        {   
            if (temp[l][p]>max2)
            {
                max2=temp[l][p];
                town=l;
            }
            
        }
        
       
    
    }

    
    printf("h megisth thermokrasia einai sthn %s kai einai %d bathmoi.",polh[town],max2);   

     
    
}
