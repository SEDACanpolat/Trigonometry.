#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double aci,sinus,cosinus,log_1,tan_1,yukari_yuvarlama;

main(void){
	
	printf("Lutfen aci degerini radyan cinsinden giriniz");
	scanf("%lf",&aci);
	
	sinus=sin(aci);
	cosinus=cos(aci);
	log_1=log10(0);
	tan_1=tan(0.785);
	yukari_yuvarlama=ceil(aci);
	
	
	printf("Sinus degeri=%.2lf\n",sinus);
	printf("Cosinus degeri=%.2lf\n",cosinus);
	printf("Log=%.2lf\n",log_1);
	printf("Tan=%.2lf\n",tan_1);
	printf("Yuvarlama=%d\n",(int)yukari_yuvarlama);
	
	return(0);
}

