#include <stdio.h>
#include <string.h>
#include <locale.h>


void copiarconteudo(FILE *file1, FILE *file2){
      char leitor[1000];
      while(fgets(leitor,1000,file1)!=NULL)
      fputs(leitor,file2);


}


void limpa_linha() {
    scanf("%*[^\n]");
    scanf("%*c");
}

int main(){
  int condicao1, condicao2, condicao3, condicao4, condicao5, condicao6, condicao7, condicao8;
  char confirma[10] = "Sim";
  char estabelecimento[30];
  float valoresta, valortotaldia, valortotalmes;
  char diadehoje[9];
  char ultimodia[4];
  char aoub;
  char maisalguma[4] = "sim";
  int condicaoa1, condicaoa2, condicaoa3, condicaoa4;
  char nome1[100];
  char nome2[100];

  setlocale(LC_ALL, "Portuguese");

   
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("==========================================================\n");
    printf("      *            PROJETO FINANÇAS 1.0            *      \n");
    printf("==========================================================\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("Selecione alguma das opções para prosseguir:\n-Adicionar[A ou a]\n-Visualizar[B ou b]\n-Fechar o Mês[C ou c]\n-Resetar[D ou d]\n-Fechar o Programa[E ou e]\n");
    
    scanf("%s",&aoub);
    
    
    
  condicaoa1 = strcmp(maisalguma,"S");
  condicaoa2 = strcmp(maisalguma,"s");
  condicaoa3 = strcmp(maisalguma,"Sim");
  condicaoa4 = strcmp(maisalguma,"sim");
  
    
    while ((condicaoa1 == 0) || (condicaoa2 == 0) || (condicaoa3 == 0) || (condicaoa4 == 0)){
    	
    
    if ((aoub == 'A') || (aoub == 'a')){

     system("cls");


    
    
   
  condicao1 = strcmp(confirma,"S");
  condicao2 = strcmp(confirma,"s");
  condicao3 = strcmp(confirma,"Sim");
  condicao4 = strcmp(confirma,"sim");


   FILE *file;

   valortotalmes = 0;
   
   
    
    printf("Informe a data de hoje: [xx/xx/xxxx]\n");
     scanf("%s",diadehoje);

     file = fopen("atual.txt","a");
     fprintf(file,"%s\n",diadehoje);
     fclose(file);
      
      

   do{   	
   	
     system("cls");
     
     printf("Informe o nome do estabelecimento da compra:");
      scanf("%s",&estabelecimento);

      
      printf("Informe o valor total gasto:");
      scanf("%f",&valoresta);
      valortotaldia = valortotaldia + valoresta;

      file = fopen("atual.txt", "a");
        fprintf(file,"%s - R$%.2f\n",estabelecimento,valoresta);
        
        
      fclose(file);


      printf("Gostaria de fazer outra operação?\n");
     
      limpa_linha();
      scanf("%s",&confirma);
  

  condicao1 = strcmp(confirma,"S");
  condicao2 = strcmp(confirma,"s");
  condicao3 = strcmp(confirma,"Sim");
  condicao4 = strcmp(confirma,"sim");
      
   }while ((condicao1 == 0) || (condicao2 == 0) || (condicao3 == 0) || (condicao4 == 0));



   file = fopen("atual.txt", "a");
       fprintf(file,"------------------------\n");
          fprintf(file,"Total gasto no dia : R$%.2f\n",valortotaldia);
          fprintf(file,"\n");
             fclose(file);
   file = fopen("valores.txt", "a");
      fprintf(file,"%.2f ",valortotaldia);
         fclose(file);

valortotaldia = 0;
         

}
  

    

    else if ((aoub == 'B') || (aoub == 'b')){

      system("cls");
      printf("Escolha uma das opções para visualização:\n");
      printf("-Mês atual: [atual]\n");
      printf("-Mês anterior: [mês-ano]\n");
      printf("-Cancelar[Não]\n");
      
      int condicaob1, condicaob2, condicaob3, condicaob4;
         scanf("%s",&nome1);
         
         condicaob1 = strcmp(nome1,"Não");
         condicaob2 = strcmp(nome1,"não");
         condicaob3 = strcmp(nome1,"N");
         condicaob4 = strcmp(nome1,"n");
         
         if((condicaob1 == 0) || (condicaob2 == 0) || (condicaob3 == 0) || (condicaob4 == 0)){
		 
		 }
         else{
         
       char txt[100] = ".txt";
    
       strncat(nome1, txt, 100);
       FILE *file;
       file = fopen(nome1, "r");
       
       system("cls");
         
       char frase[1000];
       while(fgets(frase,1000,file) != NULL){
           printf("%s",frase);
           
       }
      fclose(file);
   }

    }
    
    else if ((aoub == 'C') || (aoub == 'c')){
    	system("cls");
    	
    	
    printf("Gostaria de fechar o mês?\n");
    scanf("%s",&ultimodia);
    
	
    
    condicao5 = strcmp(ultimodia,"S");
    condicao6 = strcmp(ultimodia,"s");
    condicao7 = strcmp(ultimodia,"Sim");
    condicao8 = strcmp(ultimodia,"sim");
    
    FILE *file;
	
	if ((condicao5 == 0) || (condicao6 == 0) || (condicao7 == 0) || (condicao8 == 0)){
		
		
		
	
    printf("Informe o nome do mês e o ano:[mês-ano]\n");
    scanf("%s",&nome2);
    
    char txt[100] = ".txt";
    
    strncat(nome2, txt, 100);

      
      float x1 = 0;
      float x2 = 0;
      float x3 = 0;
      float x4 = 0;
      float x5 = 0;
      float x6 = 0;
      
      
       file = fopen("valores.txt", "r");
       fscanf(file,"%f %f %f %f %f %f",&x1,&x2,&x3,&x4,&x5,&x6);
       valortotalmes = x1+x2+x3+x4+x5+x6;
       fclose(file);
       file = fopen("atual.txt", "a");
       fprintf(file,"*******************************\n");
          fprintf(file,"Total gasto no mês : R$%.2f\n",valortotalmes);
       fclose(file);
     
        FILE *file1 = fopen("atual.txt","r");
        FILE *file2 = fopen(nome2,"w");
        
        copiarconteudo(file1,file2);
        fclose(file1);
        fclose(file2);
        
     FILE *file;
     file = fopen("atual.txt","w");
     fprintf(file,"");
     fclose(file);
        
    }
    else{
	printf("");
	}
	}
    
    

    else if ((aoub == 'D') || (aoub == 'd')){

      char certeza[100];
       system("cls");
       printf("Escolha uma das opções de reset:\n");
       printf("-Resetar mês atual: [atual]\n");
       printf("-Resetar outro mês: [mês-ano]\n");
       printf("-Cancelar:[Não]\n");
       
       limpa_linha();
       scanf("%s",&certeza);
       
       int condicao9;
      
      condicao9 = strcmp(certeza,"arquivo");


       if (condicao9 == 0){
       	 system("cls");
         FILE *file;

         file = fopen("arquivo.txt", "w");
         fprintf(file,"");
         fclose(file);
         file = fopen("valores.txt","w");
         fprintf(file,"");
         fclose(file);
         printf("+++++++++++++++++++++++++++\n");
         printf("Dados excluídos com sucesso\n");
         printf("+++++++++++++++++++++++++++\n\n");
       }
       
       else if (condicao9>0){
       	
       	
       	system("cls");
         FILE *file;
         
         
         char txt[100] = ".txt";
         strncat(certeza, txt, 100);
         
         
         file = fopen(certeza, "w");
         fprintf(file,"");
         fclose(file);
         
         printf("+++++++++++++++++++++++++++\n");
         printf("Dados excluídos com sucesso\n");
         printf("+++++++++++++++++++++++++++\n\n");
       	
         
         
       }
       
       else if (condicao9<0){
	   printf("...\n");
	   }

    }

    else if ((aoub == 'E') || (aoub == 'e')){
    	system("cls");
    	char fechar[4];
    
    	printf("*******************************\n");
    	printf("Deseja mesmo fechar o programa?\n");
    	printf("*******************************\n");
    	scanf("%s",&fechar);
    	
    	int condicaofechar1 = strcmp(fechar,"S");
        int condicaofechar2 = strcmp(fechar,"s");
        int condicaofechar3 = strcmp(fechar,"Sim");
        int condicaofechar4 = strcmp(fechar,"sim");
        
    	if ((condicaofechar1 == 0) || (condicaofechar2 == 0) || (condicaofechar3 == 0) || (condicaofechar4 == 0)){
    			
        return 0;
    }
    else{
    	system("cls");
	  printf("");
	}

    }

    else{
        printf("Valor invalido...\n");

    }
    
    printf("Deseja selecionar outra opção?\n");
    scanf("%s",&maisalguma);
    
    
  condicaoa1 = strcmp(maisalguma,"S");
  condicaoa2 = strcmp(maisalguma,"s");
  condicaoa3 = strcmp(maisalguma,"Sim");
  condicaoa4 = strcmp(maisalguma,"sim");
  
  if ((condicaoa1 == 0) || (condicaoa2 == 0) || (condicaoa3 == 0) || (condicaoa4 == 0)){
  	    system("cls");
  	    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("==========================================================\n");
        printf("      *            PROJETO FINANÇAS 1.0            *      \n");
        printf("==========================================================\n");
        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("Selecione alguma das opções para prosseguir:\n-Adicionar[A ou a]\n-Visualizar[B ou b]\n-Fechar o Mês[C ou c]\n-Resetar[D ou d]\n-Fechar o Programa[E ou e]\n");
        scanf("%s",&aoub);
        
  }
    
}
   
   }

