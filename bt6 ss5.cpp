#include<stdio.h>
int main(){
	int num1,num2,muonChon;
	 printf("nhap so t1: ");
     scanf("%d", &num1);
     printf("nhap so 2: ");
     scanf("%d", &num2);
	do{
      printf("\nCALCULATOR\n");
        printf("1. tong so\n");
        printf("2.hieu 2 so\n");
        printf("3.tich 2 so\n");
        printf("4.thuong 2 so\n");
        printf("5. thoat\n");
        printf("moi ban nhap: ");
        scanf("%d", &muonChon);
        switch (muonChon){
        	case 1:
        		printf("%d + %d =%d",num1,num2,num1 + num2);
        		break;
        	case 2:
        	printf("%d - %d =%d",num1,num2,num1 - num2);
        		break;
        	case 3:
        	printf("%d * %d =%d",num1,num2,num1 * num2);
        		break;
        	case 4:
        	printf("%d / %d =%d",num1,num2,num1 / num2);
        		break;

        	case 5:
        	printf("end");
        	 	break;

        	default:
        		printf("khong hop le");
        	}
        } while(muonChon !=5);
        return 0;
    }
	