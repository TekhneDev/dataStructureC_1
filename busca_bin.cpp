#include <iostream>
#include <stdlib.h>
#include <stdio.h>

//Busca Binaria, CASO ORDENADO DESCRECENTE
// 1 ou o indice do aluno caso encontre o elemento no vetor
//-1 se nao encontrar

int busca_bin(int vet[], int n, int elem){
     
     n = 6;
     
     int ini = 0;
     int meio;
     int fim = n-1;
     
     //cade a inicializacao do elem?
     while( ini <= fim ){
	      
	      meio = (ini + fim) / 2; //posicao
	 
	
          if (elem == vet[meio]){
          	return meio;
		  }	else if(elem < vet[meio])//valor{
		  	ini = meio + 1;
		  } else { //if (elem>vet[meio])
		  	fim = meio - 1;
		  } 
	 }
	
	return -1;
	
}





