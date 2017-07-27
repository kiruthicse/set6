#include <stdio.h>
void main(){
     int sal[4][3],i,j,itmtot[3]={0},salpertot[4]={0};
     clrscr();
     printf("*****Sales Item Demo*****\n\n");
     printf("Enter details for 4 salesman's purchase for 3 items\n");
     for(i=0;i<4;i++){
       for(j=0;j<3;j++){
        scanf("%d",&sal[i][j]);
        salpertot[i] = salpertot[i] + sal[i][j];
        itmtot[j] = itmtot[j] + sal[i][j];
       }
     }

    
    
     printf("\n\n\tItem1\tItem2\tItem3\n");
     for(i=0;i<4;i++){
     printf("%s%-4d","S",i+1);
    for(j=0;j<3;j++){
        printf("%*d",7+j,sal[i][j]);
    }
    printf("\n");
     }

     printf("\nItem Wise total\n");
     for(j=0;j<3;j++)
    printf("%s%-3d=%5d\t","Item",j+1,itmtot[j]);

     printf("\n\nSalesman Wise total\n");
     for(j=0;j<4;j++)
    printf("%s%-3d=%5d\t","S",j+1,salpertot[j]);

     getch();
}
