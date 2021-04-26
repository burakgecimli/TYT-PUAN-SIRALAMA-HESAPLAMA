#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
  setlocale(LC_ALL, "Turkish");
  printf("\n\t\t\t\t\t\t\t TYT PUAN VE SIRALAMA HESAPLAMA PROGRAMI\n");
  ciz();
  altsatir();
  hesapla();

	return 0;
}


void altsatir()
{
	printf("\n\n");
}


void ciz()
{
	int i;
	
	for(i=0;i<168;i++)
	printf("-");
}

void hesapla()
{
	
	float matris [8];

    printf("T�RK�E Do�ru Say�s�n� Giriniz:  ");
    scanf("%f",&matris[0]);
    
   
	
    printf("T�RK�E Yanl�� Say�s�n� Giriniz:  ");
    scanf("%f",&matris[1]);
    
    altsatir();


    printf("SOSYAL B�L�MLER Do�ru Say�s�n� Giriniz: ");
    scanf("%f",&matris[2]);

    printf("SOSYAL B�L�MLER Say�s�n� Giriniz: ");
    scanf("%f",&matris[3]);
    
    altsatir();
    

    printf("TEMEL MATEMAT�K Do�ru Say�s�n� Giriniz: ");
    scanf("%f",&matris[4]);

    printf("TEMEL MATEMAT�K Yanl�� Say�s�n� Giriniz: ");
    scanf("%f",&matris[5]);
    
    altsatir();


    printf("FEN B�L�MLER� Do�ru Say�s�n� Giriniz: ");
    scanf("%f",&matris[6]);

    printf("FEN B�L�MLER� Yanl�� Say�s�n� Giriniz: ");
    scanf("%f",&matris[7]);
    
    altsatir();


    printf("OBP Puan�n�z� Giriniz:");
    scanf("%f",&matris[8]);
    ciz();
    

    int kokPuan=100;
    float puan=0;
    
    float tnet=matris[0]-matris[1]/4;
    float snet=matris[2]-matris[3]/4;
    float mnet=matris[4]-matris[5]/4;
    float fnet=matris[6]-matris[7]/4;
    float Yer_obp=matris[8]*0.6;

	puan=kokPuan+Yer_obp+(tnet*3.3)+(mnet*3.3)+(snet*3.4)+(fnet*3.4);
	float topNet=tnet+snet+mnet+fnet;
	
	printf("SONU�LAR");
	altsatir();
	printf("T�RK�E Net Say�s�: %.2f\n",tnet);
	printf("SOSYAL BYLYMLER Net Say�s�: %.2f\n",snet);
	printf("MATEMATYK Net Say�s�: %.2f\n",mnet);	
	printf("FEN BYLYMLERY Net Say�s�: %.2f",fnet);
	altsatir();
	printf("TOPLAM NET SAYISI: %.2f\n",topNet);
	ciz();
	printf("TYT YERLE�T�RME PUANI:%.3f",puan);
	
	
		float ratings[18][3]={//2 boyutlu dizi. {baslang�c degeri, oran, s�ralama baslang�c�}
		{ 560 , 0 , 0},
		{ 550 , (48-1)/10 , 1 },
		{ 530 , (1080-48)/20 , 48 },
		{ 510 , (4961-1080)/20 , 1080 },
		{ 490 , (13501-4961)/20 , 4961 },
		{ 470 , (26999-13501)/20 , 13501 },
		{ 450 , (45824-26999)/20 , 26999 },
		{ 430 , (69646-45824)/20 , 45824 },
		{ 410 , (98777-69646)/20 , 69646 },
		{ 390 , (134509-98777)/20 , 98777 },
		{ 370 , (179581-134509)/20 , 134509 },
		{ 350 , (237601-179581)/20 , 179581 },
		{ 330 , (313204-237601)/20 , 237601 },
		{ 310 , (413458-313204)/20 , 313204 },
		{ 290 , (546557-413458)/20 , 413458 },
		{ 270 , (716747-546557)/20 , 546557 },
		{ 250 , (927745-716747)/20 , 716747 },
		{ 230 , (1579449-927745)/20 , 927745 },
		{ 210 , (1699953-1579449)/20 ,1579449 }
	};
	
	
	
	float  currentRatings, currentRange;
	int currentShortStart;


	if (puan == 560)
	{
		printf("S�ralaman�z 1.\n");
	}
	else
	{
		int i;
		for (i = 0; i < 18; i++)
		{
			if ( puan < ratings[i][0] && puan >= ratings[i+1][0] )
			{
				currentRange = ratings[i][0];//aral�g� al�yor orn: 485 ise 500 currentrange
				currentRatings = ratings[i+1][1];// oran� al�yor
				currentShortStart = ratings[i+1][2];// s�ralama baslang�c�n� al�yor. orn 485 icin baslang�c 1
				break;
			}
		}
		int shortt =  currentShortStart + currentRatings * (currentRange - puan);// s�ralama baslang�c� + oran*(500-485)
		printf("\nTYT YERLE�T�RME SIRALAMANIZ: %d\n", shortt );

	}
	

}







