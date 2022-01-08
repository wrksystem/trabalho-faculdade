/*Desenvolvimento
	Yuri De Castro  6400
	Werik Rodrigues 6388
	Caio da Silva   6368
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

typedef struct sQuesitos{
	
	float bateria[5];
	float mediabateria=0;
	float sambaenredo[5];
	float mediasambaenredo=0;
	float harmonia[5];
	float mediaharmonia=0;
	float evolucao[5];
	float mediaevolucao=0;
	float enredo[5];
	float mediaenredo=0;
	float conjunto[5];
	float mediaconjunto=0;
	float alegoriaseaderecos[5];
	float mediaalegoriaseaderecos=0;
	float fantasias[5];
	float mediafantasias=0;
	float comissaodefrente[5];
	float mediacomissaodefrente=0;
	float mestresalaeportabandeira[5];
	float mediamestresalaeportabandeira=0;
	float aladasbaianas[5];
	float mediaaladasbaianas=0;
	float referenciacultural[5];
	float mediareferenciacultural=0;
	float duracao[5];
	float mediaduracao=0;
	
}Quesitos;

typedef struct sEscola{
	
	char nomeEscola[31];
	char responsavelEscola[31];
	float notafinal;
	Quesitos notas;
	
}Escola;
//a função calcular media quesito vai receber os valores das notas de cada quesito, e fazer a media para cada um deles.

void CalcularNotaMediaQuesito(Escola *pescola1, int ne){
	
	 float menornota=10;
	 float maiornota=7;
	 int i;
	
	for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediabateria+=pescola1[ne-1].notas.bateria[i];
		if(pescola1[ne-1].notas.bateria[i]<menornota){
			menornota=pescola1[ne-1].notas.bateria[i];
		}else{
			if(pescola1[ne-1].notas.bateria[i]>maiornota){
			maiornota=pescola1[ne-1].notas.bateria[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediabateria=(pescola1[ne-1].notas.mediabateria-(menornota+maiornota));
	pescola1[ne-1].notas.mediabateria/=3;
	
	menornota=10;
	maiornota=7;
	
//-------------------------- Média Bateria ------------------------------------------------------------------------------------
	
		for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediasambaenredo+=pescola1[ne-1].notas.sambaenredo[i];
		if(pescola1[ne-1].notas.sambaenredo[i]<menornota){
			menornota=pescola1[ne-1].notas.sambaenredo[i];
		}else{
			if(pescola1[ne-1].notas.sambaenredo[i]>maiornota){
			maiornota=pescola1[ne-1].notas.sambaenredo[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediasambaenredo=(pescola1[ne-1].notas.mediasambaenredo-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;
	
//------------------------ Média Samba-Enredo -----------------------------------------------------------------------------

	for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediaharmonia+=pescola1[ne-1].notas.harmonia[i];
		if(pescola1[ne-1].notas.harmonia[i]<menornota){
			menornota=pescola1[ne-1].notas.harmonia[i];
		}else{
			if(pescola1[ne-1].notas.harmonia[i]>maiornota){
			maiornota=pescola1[ne-1].notas.harmonia[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediaharmonia=(pescola1[ne-1].notas.mediaharmonia-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;
	
//--------------------- Média Harmonia --------------------------------------------------------------------------------------
    
	for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediaevolucao+=pescola1[ne-1].notas.evolucao[i];
		if(pescola1[ne-1].notas.evolucao[i]<menornota){
			menornota=pescola1[ne-1].notas.evolucao[i];
		}else{
			if(pescola1[ne-1].notas.evolucao[i]>maiornota){
			maiornota=pescola1[ne-1].notas.evolucao[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediaevolucao=(pescola1[ne-1].notas.mediaevolucao-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;

	


//--------------------- Média Evolução --------------------------------------------------------------------------------------

    for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediaenredo+=pescola1[ne-1].notas.enredo[i];
		if(pescola1[ne-1].notas.enredo[i]<menornota){
			menornota=pescola1[ne-1].notas.enredo[i];
		}else{
			if(pescola1[ne-1].notas.enredo[i]>maiornota){
			maiornota=pescola1[ne-1].notas.enredo[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediaenredo=(pescola1[ne-1].notas.mediaenredo-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;

//--------------------- Média Enredo --------------------------------------------------------------------------------------

    for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediaconjunto+=pescola1[ne-1].notas.conjunto[i];
		if(pescola1[ne-1].notas.conjunto[i]<menornota){
			menornota=pescola1[ne-1].notas.conjunto[i];
		}else{
			if(pescola1[ne-1].notas.conjunto[i]>maiornota){
			maiornota=pescola1[ne-1].notas.conjunto[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediaconjunto=(pescola1[ne-1].notas.mediaconjunto-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;
	
//--------------------- Média Conjunto --------------------------------------------------------------------------------------

    for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediaalegoriaseaderecos+=pescola1[ne-1].notas.alegoriaseaderecos[i];
		if(pescola1[ne-1].notas.alegoriaseaderecos[i]<menornota){
			menornota=pescola1[ne-1].notas.alegoriaseaderecos[i];
		}else{
			if(pescola1[ne-1].notas.alegoriaseaderecos[i]>maiornota){
			maiornota=pescola1[ne-1].notas.alegoriaseaderecos[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediaalegoriaseaderecos=(pescola1[ne-1].notas.mediaalegoriaseaderecos-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;

//--------------------- Média Alegorias e Adereços --------------------------------------------------------------------------------------

    for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediafantasias+=pescola1[ne-1].notas.fantasias[i];
		if(pescola1[ne-1].notas.fantasias[i]<menornota){
			menornota=pescola1[ne-1].notas.fantasias[i];
		}else{
			if(pescola1[ne-1].notas.fantasias[i]>maiornota){
			maiornota=pescola1[ne-1].notas.fantasias[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediafantasias=(pescola1[ne-1].notas.mediafantasias-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;

//--------------------- Média Fantasias --------------------------------------------------------------------------------------

    for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediacomissaodefrente+=pescola1[ne-1].notas.comissaodefrente[i];
		if(pescola1[ne-1].notas.comissaodefrente[i]<menornota){
			menornota=pescola1[ne-1].notas.comissaodefrente[i];
		}else{
			if(pescola1[ne-1].notas.comissaodefrente[i]>maiornota){
			maiornota=pescola1[ne-1].notas.comissaodefrente[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediacomissaodefrente=(pescola1[ne-1].notas.mediacomissaodefrente-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;  

//--------------------- Média Comissão de Frente --------------------------------------------------------------------------------------

    for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediamestresalaeportabandeira+=pescola1[ne-1].notas.mestresalaeportabandeira[i];
		if(pescola1[ne-1].notas.mestresalaeportabandeira[i]<menornota){
			menornota=pescola1[ne-1].notas.mestresalaeportabandeira[i];
		}else{
			if(pescola1[ne-1].notas.mestresalaeportabandeira[i]>maiornota){
			maiornota=pescola1[ne-1].notas.mestresalaeportabandeira[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediamestresalaeportabandeira=(pescola1[ne-1].notas.mediamestresalaeportabandeira-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;

//--------------------- Média Mestre-Sala e Porta-Bandeira --------------------------------------------------------------------------------------

    for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediaaladasbaianas+=pescola1[ne-1].notas.aladasbaianas[i];
		if(pescola1[ne-1].notas.aladasbaianas[i]<menornota){
			menornota=pescola1[ne-1].notas.aladasbaianas[i];
		}else{
			if(pescola1[ne-1].notas.aladasbaianas[i]>maiornota){
			maiornota=pescola1[ne-1].notas.aladasbaianas[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediaaladasbaianas=(pescola1[ne-1].notas.mediaaladasbaianas-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;  

//--------------------- Média Ala das Baianas  --------------------------------------------------------------------------------------

    for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediareferenciacultural+=pescola1[ne-1].notas.referenciacultural[i];
		if(pescola1[ne-1].notas.referenciacultural[i]<menornota){
			menornota=pescola1[ne-1].notas.referenciacultural[i];
		}else{
			if(pescola1[ne-1].notas.referenciacultural[i]>maiornota){
			maiornota=pescola1[ne-1].notas.referenciacultural[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediareferenciacultural=(pescola1[ne-1].notas.mediareferenciacultural-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;  

//--------------------- Média Referência Cultural   --------------------------------------------------------------------------------------

    for(i=0;i<5;i++){
		pescola1[ne-1].notas.mediaduracao+=pescola1[ne-1].notas.duracao[i];
		if(pescola1[ne-1].notas.duracao[i]<menornota){
			menornota=pescola1[ne-1].notas.duracao[i];
		}else{
			if(pescola1[ne-1].notas.duracao[i]>maiornota){
			maiornota=pescola1[ne-1].notas.duracao[i];
		}
		
	}
}
	pescola1[ne-1].notas.mediaduracao=(pescola1[ne-1].notas.mediaduracao-(menornota+maiornota))/3;
	
	menornota=10;
	maiornota=7;

}
//--------------------- Média Duração   --------------------------------------------------------------------------------------

void ExibirEscolas(Escola *pescola1, int ne){
	
	int i;
		
	printf("Dados da Escola %d-%s \n", ne+1,pescola1[ne].nomeEscola);
	
	for (i = 0; i < 5; i++){
			//tabela que exibe as notas dos jurados por quesito e por escola.
		
		printf("Notas do jurado %d                                                     \n", i+1);
		printf("Nota do quesito Bateria: %.2f                                          \n", pescola1[ne].notas.bateria[i]);
		printf("Nota do quesito Samba-Enredo: %.2f                                     \n", pescola1[ne].notas.sambaenredo[i]);
		printf("Nota do quesito Harmonia: %.2f                                         \n", pescola1[ne].notas.harmonia[i]);
		printf("Nota do quesito Evolução: %.2f                                         \n", pescola1[ne].notas.evolucao[i]);
		printf("Nota do quesito Enredo: %.2f                                           \n", pescola1[ne].notas.enredo[i]);
		printf("Nota do quesito Conjunto: %.2f                                         \n", pescola1[ne].notas.conjunto[i]);
		printf("Nota do quesito Alegorias e Adereços: %.2f                             \n", pescola1[ne].notas.alegoriaseaderecos[i]);
		printf("Nota do quesito Fantasias: %.2f                                        \n", pescola1[ne].notas.fantasias[i]);
		printf("Nota do quesito Comissão de Frente: %.2f                               \n", pescola1[ne].notas.comissaodefrente[i]);
		printf("Nota do quesito Mestre-Sala e Porta-Bandeira: %.2f                     \n", pescola1[ne].notas.mestresalaeportabandeira[i]);
		printf("Nota do quesito Ala das Baianas: %.2f                                  \n", pescola1[ne].notas.aladasbaianas[i]);
		printf("Nota do quesito Referência Cultural: %.2f                              \n", pescola1[ne].notas.referenciacultural[i]);
		printf("Nota do quesito Duração: %.2f                                          \n", pescola1[ne].notas.duracao[i]);
		
		printf("|Pressione ENTER para exibir as notas do próximo jurado\n");
		system("pause");
		system("cls");
		
	}//table de exibição das m[edias finais de cada quesito.
	
	printf("Notas finais de cada quesito:                                         \n");
	
	printf("Nota final do quesito Bateria: %.2f                                   \n", pescola1[ne].notas.mediabateria);
	printf("Nota final do quesito Samba-enredo: %.2f                              \n", pescola1[ne].notas.mediasambaenredo );
	printf("Nota final do quesito Harmonia: %.2f                                  \n", pescola1[ne].notas.mediaharmonia );
	printf("Nota final do quesito Evolução: %.2f                                  \n", pescola1[ne].notas.mediaevolucao );
	printf("Nota final do quesito Enredo: %.2f                                    \n", pescola1[ne].notas.mediaenredo );
	printf("Nota final do quesito Conjunto: %.2f                                  \n", pescola1[ne].notas.mediaconjunto );
	printf("Nota final do quesito Alegoria e Adereços: %.2f                       \n", pescola1[ne].notas.mediaalegoriaseaderecos);
	printf("Nota final do quesito Fantasias: %.2f                                 \n", pescola1[ne].notas.mediafantasias );
	printf("Nota final do quesito Comissão de Frente: %.2f                        \n", pescola1[ne].notas.mediacomissaodefrente );
	printf("Nota final do quesito Mestre-Sala e Porta-Bandeira: %.2f              \n", pescola1[ne].notas.mediamestresalaeportabandeira );
	printf("Nota final do quesito Ala das Baianas: %.2f                           \n",pescola1[ne].notas.mediaaladasbaianas);
	printf("Nota final do quesito Referência Cultural: %.2f                       \n", pescola1[ne].notas.mediareferenciacultural );
	printf("Nota final do quesito Duração: %.2f                                   \n", pescola1[ne].notas.mediaduracao);
	
	printf("Pressione ENTER para exibir os dados da próxima escola\n");
	system("pause");
	system("cls");
	 
	
}

float TestarNota(float notas){
	int j=0;
	while(j<1){
	
		if(notas<=6 || notas>=11){
			system("cls");
			printf("Valor inválido\n");
			Sleep(1000);
			system("cls");
			printf("Digite outro valor: ");
			scanf("%f", &notas);
			TestarNota(notas);
		}else{
			j++;
		}
	}
	return notas;
}

int TestarNumeroCadastro(int num){
	do{
		if(num>=1 && num<=10){
			return num;
		}else{
			printf("Valor inválido!\n");
			Sleep(1000);
			system("cls");
			printf("Digite novamente: ");
			scanf("%d",&num);
		}
		
	}while(num<1 || num>10);
}

int VerificarTamanhoNomeEscola(char c[31]){
	
	int tamanho=0;
	
	for(int i=0; c[i]!='\0';i++){
		tamanho+=1;	
	}
	
	return tamanho;
}

int Menu(){
	
	int op;
	
	printf("Controle de apurações de nota do Carnaval de Rio Paranaíba 2020:\n\n\n");
	printf(" ----------------------------------------------------------- \n");
	printf("|Digite 1 para sair do programa                             |\n");
	printf("|Digite 2 para cadastrar uma escola de samba                |\n");
	printf("|Digite 3 para buscar e exibir dados de uma escola          |\n");
	printf("|Digite 4 para calcular nota final das escolas de samba     |\n");
	printf("|Digite 5 para mostrar escolas de samba cadastradas         |\n");
	printf("|Digite 6 para mostrar a escola campeã e a vice campeã      |\n");
	printf("|Digite 7 para mostrar as duas escolas que serão rebaixadas |\n");
	printf("|Digite 8 para gravar em arquivo o cadastro das escolas     |\n");
	printf("|Digite 9 para carregar de um arquivo o cadastro das escolas|\n");
	printf(" ---------------------------------------------------------- \n");
	scanf("%d", &op);
	system("cls");
	return op;
	
}
int main(){
	
	float penultimapos = 0;
	float ultimapos = 130;
	float notacampea = 91;
	float notavice= 0;
	int op, ne, tamanhostr, jurados, i;
	int cont = 0;
	int vf = 0;
	char buscarnome[31];
	Escola escola1[10];
	setlocale(LC_ALL, "Portuguese");
	
	op = Menu();
	
	do{
	switch(op){
		
		case 1:
		
			break;
		
		case 2:
			
			printf("Digite o código da escola que você deseja cadastrar (1-10): ");
		    scanf("%d",&ne);
		    ne=TestarNumeroCadastro(ne);
		    system("cls");
		    	
		    	do{
		    	
				printf("Digite o nome da escola %d(mínimo de 8 caracteres): \n", ne);
				fflush(stdin);
				gets(escola1[ne-1].nomeEscola);
				
				tamanhostr=VerificarTamanhoNomeEscola(escola1[ne-1].nomeEscola);
	
				if(tamanhostr>=8){
				
					printf("Digite o nome do responsável pela escola %d: ", ne);
		        	fflush(stdin);
		        	gets(escola1[ne-1].responsavelEscola);
					printf("!! Escola cadastrada !!");
					Sleep(800);
					system("cls");
					
					while(cont<5){
						do{
					
							printf("Digite qual jurado irá avaliar (de 1 a 5): ");
							scanf("%d",&jurados);
					
							system("cls");
					
							if(jurados >= 1 && jurados <= 5){
						
					
							
								printf("Notas da escola: %s\n",(escola1[ne-1]).nomeEscola);
						
								printf("Digite a nota para a Bateria: \n");
								scanf("%f", &escola1[ne-1].notas.bateria[jurados-1]);
								escola1[ne-1].notas.bateria[jurados-1]=TestarNota(escola1[ne-1].notas.bateria[jurados-1]);
															
					            printf("Digite a nota para a Samba Enredo: \n");
								scanf("%f", &(escola1[ne-1].notas.sambaenredo[jurados-1]));
								escola1[ne-1].notas.sambaenredo[jurados-1]=TestarNota(escola1[ne-1].notas.sambaenredo[jurados-1]);
								
								printf("Digite a nota para a Harmonia: \n");
								scanf("%f", &(escola1[ne-1].notas.harmonia[jurados-1]));
								escola1[ne-1].notas.harmonia[jurados-1]=TestarNota(escola1[ne-1].notas.harmonia[jurados-1]);
								
								printf("Digite a nota para a Evolução: \n");
								scanf("%f", &(escola1[ne-1].notas.evolucao[jurados-1]));
								escola1[ne-1].notas.evolucao[jurados-1]=TestarNota(escola1[ne-1].notas.evolucao[jurados-1]);
								
								printf("Digite a nota para a Enredo: \n");
								scanf("%f", &(escola1[ne-1].notas.enredo[jurados-1]));
								escola1[ne-1].notas.enredo[jurados-1]=TestarNota(escola1[ne-1].notas.enredo[jurados-1]);
								
								printf("Digite a nota para a Conjunto: \n");
								scanf("%f", &(escola1[ne-1].notas.conjunto[jurados-1]));
								escola1[ne-1].notas.conjunto[jurados-1]=TestarNota(escola1[ne-1].notas.conjunto[jurados-1]);
								
								printf("Digite a nota para a Alegorias e Adereços: \n");
								scanf("%f", &(escola1[ne-1].notas.alegoriaseaderecos[jurados-1]));
								escola1[ne-1].notas.alegoriaseaderecos[jurados-1]=TestarNota(escola1[ne-1].notas.alegoriaseaderecos[jurados-1]);
								
								printf("Digite a nota para a Fantasias: \n");
								scanf("%f", &(escola1[ne-1].notas.fantasias[jurados-1]));
								escola1[ne-1].notas.fantasias[jurados-1]=TestarNota(escola1[ne-1].notas.fantasias[jurados-1]);
								
								printf("Digite a nota para a Comissão de frente: \n");
								scanf("%f", &(escola1[ne-1].notas.comissaodefrente[jurados-1]));
								escola1[ne-1].notas.comissaodefrente[jurados-1]=TestarNota(escola1[ne-1].notas.comissaodefrente[jurados-1]);
								
								printf("Digite a nota para a Mestre-Sala e Porta-Bandeiras: \n");
								scanf("%f", &(escola1[ne-1].notas.mestresalaeportabandeira[jurados-1]));
								escola1[ne-1].notas.mestresalaeportabandeira[jurados-1]=TestarNota(escola1[ne-1].notas.mestresalaeportabandeira[jurados-1]);
								
								printf("Digite a nota para a Ala das Baianas: \n");
								scanf("%f", &(escola1[ne-1].notas.aladasbaianas[jurados-1]));
								escola1[ne-1].notas.aladasbaianas[jurados-1]=TestarNota(escola1[ne-1].notas.aladasbaianas[jurados-1]);
								
								printf("Digite a nota para a Referência Cultural: \n");
								scanf("%f", &(escola1[ne-1].notas.referenciacultural[jurados-1]));
								escola1[ne-1].notas.referenciacultural[jurados-1]=TestarNota(escola1[ne-1].notas.referenciacultural[jurados-1]);
								
								printf("Digite a nota para a Duração: \n");
								scanf("%f", &(escola1[ne-1].notas.duracao[jurados-1]));
								escola1[ne-1].notas.duracao[jurados-1]=TestarNota(escola1[ne-1].notas.duracao[jurados-1]);
								printf("!!Notas cadastradas com sucesso!!");
								
								cont++;
								Sleep(1000);
								system("cls");
								
							}else{
								printf("Opção inválida.\nDigite novamente:");
								Sleep(1000);
								system("cls");
							}	
						
						}while(jurados<1 || jurados >5);
					}
				cont = 0;
				CalcularNotaMediaQuesito(escola1, ne);
			    op=Menu();
					
				}else{
					system("cls");
					printf("Tamanho de escola pequeno.\nDigitenovamente: \n");
					Sleep(1000);
					tamanhostr=0;
				}
			}while(tamanhostr<=7);
			break;
			
		case 3:
			
			printf("Nome da escola que deseja buscar:");
			fflush(stdin);
			gets(buscarnome);
			for(i=0;i<10;i++){
				
				vf=strcmp(escola1[i].nomeEscola,buscarnome);
				if(vf==0){
					printf("!! Escola encontrada !!\n");
					Sleep(1000);
					system("cls");
					printf("nome da escola: %s\nNome do responsável: %s\n", escola1[i].nomeEscola, escola1[i].responsavelEscola);
					printf("Pressione ENTER para continuar !!");
					system("pause");
				}
			}
			op=Menu();
			
			break;
			
		case 4:
			
			break;
			
		case 5:
			 
			for(ne = 0; ne < 10; ne++){
				
				ExibirEscolas(escola1, ne);
				
			}
			op=Menu();
			break;
			
		case 6:
			
				for(ne=0;ne<10;ne++){
					
					escola1[ne].notafinal=escola1[ne].notafinal+escola1[ne].notas.mediabateria+escola1[ne].notas.mediaaladasbaianas+escola1[ne].notas.mediaalegoriaseaderecos+escola1[ne].notas.mediacomissaodefrente+escola1[ne].notas.mediaconjunto+escola1[ne].notas.mediaduracao+escola1[ne].notas.mediaenredo+escola1[ne].notas.mediaevolucao+escola1[ne].notas.mediafantasias+escola1[ne].notas.mediaharmonia+escola1[ne].notas.mediamestresalaeportabandeira+escola1[ne].notas.mediareferenciacultural+escola1[ne].notas.mediasambaenredo;
				}
				
				
				for(ne=0;ne<10;ne++){
		        	if(escola1[ne].notafinal>notacampea){
						notavice=notacampea;
						notacampea=escola1[ne].notafinal;
	 				}	
				
				}
				for(ne=0;ne<10;ne++){
					//para verificar a posição da escola campeã
					if(escola1[ne].notafinal == notacampea){
						
						printf("Escola Campeã é %s com a nota final de %.2f\n", escola1[ne].nomeEscola, escola1[ne].notafinal);
					}
				}
				for(ne=0;ne<10;ne++){
					//para verificar a posição da escola vice-campeã
					if(escola1[ne].notafinal == notavice){
					
					printf("Escola Vice-Campeã é %s com a nota final de %.2f\n", escola1[ne].nomeEscola, escola1[ne].notafinal);
					}
				}
	        op=Menu();
			break;
			
		case 7:
			for(ne=0;ne<10;ne++){
					
					escola1[ne].notafinal+=escola1[ne].notas.mediabateria+escola1[ne].notas.mediaaladasbaianas+escola1[ne].notas.mediaalegoriaseaderecos+escola1[ne].notas.mediacomissaodefrente+escola1[ne].notas.mediaconjunto+escola1[ne].notas.mediaduracao+escola1[ne].notas.mediaenredo+escola1[ne].notas.mediaevolucao+escola1[ne].notas.mediafantasias+escola1[ne].notas.mediaharmonia+escola1[ne].notas.mediamestresalaeportabandeira+escola1[ne].notas.mediareferenciacultural+escola1[ne].notas.mediasambaenredo;
			}
			for(ne=0;ne<10;ne++){
		        	if(escola1[ne].notafinal<ultimapos){
						penultimapos=ultimapos;
						ultimapos=escola1[ne].notafinal;
	 				}	
				
				}
				for(ne=0;ne<10;ne++){
					//para verificar escola rebaixada em última posição
					if(escola1[ne].notafinal == ultimapos){
					
					printf("Escola rebaixada em última posição é %s com a nota %.2f\n", escola1[ne].nomeEscola, escola1[ne].notafinal);
					}
				}
				for(ne=0;ne<10;ne++){
					//para verificar a escola rebaixada em penultima posição
					if(escola1[ne].notafinal == penultimapos){
					
					printf("Escola rebaixada em penultima posição é %s com a nota %.2f\n", escola1[ne].nomeEscola, escola1[ne].notafinal);
					}
				}
				op=Menu();
			break;
			
		case 8:
			
			break;
			
		case 9:
			
			break;
			
		default:
			printf("!!Opção inválida!!\n");
			Sleep(1000);
			system("cls");
			printf("Digite novamente: ");
			op=Menu();

    }
}while(op!=1);

return 0;

}
