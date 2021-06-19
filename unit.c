#include <stdio.h>
#include <stdlib.h>
double kmtmile (double a)
{
    double c = a * 0.621371 ;
    return c ;
}
double inchtofoot (double a)
{
    double i = a / 12 ;
    return i ;
}
double cmtoinch (double a)
{
    double ccm = a * 0.393701 ;
    return ccm ;
}
double ptokg (double a)
{
    double pkg = a * 0.453592;
    return pkg ;
}
double inchtom (double a)
{
    double inm = a * 0.0254;
    return inm ;
}
int main(int argc, char const *argv[])
{
    int i ;
    int ch ;
    while (1)
    {
        printf("1 for Km to mile \n");
        printf("2 for inch to foot \n");
        printf("3 for cm to inch \n");
        printf("4 for pound to Kg \n");
        printf("5 for inch to m \n");
        printf("6 for exit \n");
        printf("Enter Choice \n");
        scanf("%d" , &ch);
        switch (ch)
        {
        case 1:printf("Enter Km to Convert \n");
               double km ;
               scanf("%lf" , &km) ;
               double kmm = kmtmile(km); 
               printf("%.4lf km is equal to %.4lf mile  \n" , km  , kmm) ;
               break ;
        case 2:printf("Enter inch to Convert \n");
               double inch ;
               scanf("%lf" , &inch);
               double inf = inchtofoot(inch) ; 
               printf("%.4lf inch is equal to %.5lf foot \n" , inch  , inf) ;
               break ;
        case 3:printf("Enter cm to Convert \n");
               double cm ;
               scanf("%lf" , &cm); 
               double ccm = cmtoinch(cm);
               printf("%.4lf cm is equal to %.3lf inch \n" , cm , ccm);
               break ;
        case 4:printf("Enter pound to Convert \n");
               double p ;
               scanf("%lf" , &p); 
               double tokg = ptokg(p);
               printf("%.4lf pound is equal to %.3lf kg \n" , p , tokg);
               break ;
        case 5:printf("Enter inch to Convert \n");
               double intom ;
               scanf("%lf" , &intom); 
               double inm = inchtom(intom);
               printf("%.4lf inch is equal to %.3lf m \n" , intom , inm);
               break ;
        case 6: exit(0);
                break ;
        default:break ;
        }
    }  
    return 0;
}