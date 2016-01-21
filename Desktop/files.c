#include <stdio.h>

int main()
{
    char a[100],c;
    int b,m;
    int flag=1;
    FILE *fp;

    b = 5;

    fp=fopen("test.txt","r+");
 /*
    fprintf(p,"1 %d : --",b);
    fprintf(p,"2");
    fprintf(p,"3");
*/

 /*
    fseek(p,3,SEEK_SET);
    fseek(p,-1,SEEK_CUR);
*/

    while ((flag==1))
    {
        fseek(fp,-1,SEEK_CUR);

        fscanf(fp,"%s",&c);
        fscanf(fp,"%d",&b);




        fscanf(fp,"%c",&c);

        if(c ==';'){
            flag=0;
            printf("yes");}
    }



    return 0;

}
