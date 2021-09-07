#include <stdio.h>
#include <math.h>

main(){
    int a,b;
    double c;

    freopen("input.txt" , "r" ,stdin);

    freopen("output.txt" , "w" ,stdout);

    scanf("%d %d %lf" , &a,&b,&c);

    printf("diavasame: %d , %d , %0.2lf" , a,b,c);

    return 0;



}