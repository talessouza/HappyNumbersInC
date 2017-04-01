#include <stdio.h>
#include <string.h>
#include <conio2.h>


void test(char * esperado, char * atual, char * mensagem) {
	int resultado_comparacao = strcmp(esperado, atual);
	if (resultado_comparacao == 0)
	{
		textcolor(GREEN);
		printf("%s - TEST OK! !!!\n", mensagem);
		textcolor(LIGHTGRAY);
	} else 
	{
		textcolor(RED);
		printf("%s - ****ERRO**** NO TEST - Esperado: [%s] retornado: [%s]!!!\n", mensagem, esperado, atual);
		textcolor(LIGHTGRAY);
	}
}

int main(int argc, char *argv[]) {
	
	test("feliz", "feliz", "test 1");
	test("feliz", "triste", "test 4");
	test("feliz", "feliz", "test 100");
	
	return 0;
}
