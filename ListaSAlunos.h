#include <Aluno.h>
#define	MAX 60
#ifndef LISTASALUNOS_H_
#define LISTASALUNOS_H_

/*Estrutura de nome ListaSEQ*/
    // - Campo aluno: array do tipo t_Aluno;
    // - Campo tam: tamanho atual da lista;
typedef struct ListaSEQ{
    t_Aluno aluno[MAX];
    int tam;
} t_ListaSEQ;

/*Cria uma lista de alunos vazia:*/
    // - Retorna ponteiro para a lista criada;
    // - Sem par�metros.
ListaSEQ CriaListaVazia(void);

/*Verifica se a lista possui um numero v�lido de elementos:*/
    // - Retorna 1 para verdadeiro;
    // - Retorna 0 para tamanho maior do que o m�ximo;
    // - Retorna -1 para tamanho menor do que zero;
    // - Recebe ponteiro para a lista sob an�lise.
int Valida(ListaSEQ *);

/*Verifica se a lista est� vazia:*/
    // - Retorna 1 para verdadeiro;
    // - Retorna 0 para falso;
    // - Retorna -1 para valor inv�lido de elementos;
    // - Retorna -2 para erro desconhecido;
    // - Recebe ponteiro para a lista sob an�lise.
int Vazia(ListaSEQ *);

/*Verifica se a lista est� cheia:*/
    // - Retorna 1 para verdadeiro;
    // - Retorna 0 para falso;
    // - Retorna -1 para valor inv�lido de elementos;
    // - Retorna -2 para erro desconhecido;
    // - Recebe ponteiro para a lista sob an�lise.
int Cheia(ListaSEQ *);

/*Desloca todos os itens a partir de certo ponto uma und. a esquerda*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Retorna -1 para posi��o de deslocamento inv�lida;
    // - Recebe ponteiro para a lista sob an�lise.
    // - Recebe posi��o inicial de deslocamento.
int DeslocaEsq(ListaSEQ *, int);

/*Desloca todos os itens a partir de certo ponto uma und. a direita*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Retorna -1 para posi��o de deslocamento inv�lida;
    // - Recebe ponteiro para a lista sob an�lise.
    // - Recebe posi��o inicial de deslocamento.
int DeslocaDir(ListaSEQ *, int);

/*Retorna total de alunos registrados:*/
    // - Retorna -1 para valor inv�lido de elementos;
    // - Retorna -2 para erro desconhecido;
    // - Recebe ponteiro para a lista sob an�lise.
int TotalOcupado(ListaSEQ *);

/*Retorna quantidade de alunos que ainda podem ser inseridos:*/
    // - Retorna -1 para valor inv�lido de elementos;
    // - Retorna -2 para erro desconhecido;
    // - Recebe ponteiro para a lista sob an�lise.
int TotalRestante(ListaSEQ *);

/*Insere um novo elemento a lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe ponteiro para a lista sob an�lise.
    // - Recebe valor a ser inserido
    // - Recebe posi��o da inser��o.
int Inserir(ListaSEQ *, char *);

/*Realiza uma busca bin�ria na lista:*/
    // - Retorna posi��o correta para adi��o do n�mero;
    // - Recebe ponteiro para a lista sob an�lise;
    // - Recebe n�mero de RGM;
int BuscaB(ListaSEQ *, char *);
/*int buscaBinaria(int vet[], int ini, int fim, int key) {
    int meio = ini + (fim-ini)/2;

    if (fim<ini)
        return -1;

    if (vet[meio] == key) {
        return meio;
    }
    if (vet[meio] < key)
        return buscaBinaria(vet, meio+1, fim, key);
    else
        return buscaBinaria(vet, ini, meio-1, key);
}
*/

/*Realiza uma busca sequencial na lista:*/
    // - Retorna posi��o do item procurado;
//int BuscaS(ListaSEQ *, int); ???

/*Procura a posi��o de um elemento na lista pelo seu nome:*/
    // - Retorna posi��o do item procurado;
    // - Retorna -1 para nome n�o encontrado;
    // - Recebe ponteiro para a lista sob an�lise;
    // - Recebe nome a ser procurado;
//int ProcurarN(ListaSEQ *, char *);

/*Procura a posi��o de um elemento na lista pelo seu RGM:*/
    // - Retorna posi��o do item procurado;
    // - Retorna -1 para RGM n�o encontrado;
    // - Recebe ponteiro para a lista sob an�lise;
    // - Recebe RGM a ser procurado;
int ProcurarR(ListaSEQ *, char *);

/*Remove um elemento por posi��o na lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe ponteiro para a lista sob analise
    // - Recebe posi��o da remo��o.
int RemoverP(ListaSEQ *, int);

/*Remove um elemento por nome:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe ponteiro para a lista sob analise
    // - Recebe nome do elemento a ser removido.
//int RemoverN(ListaSEQ *, char *);

/*Remove um elemento por RGM:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe ponteiro para a lista sob analise
    // - Recebe RGM do elemento a ser removido.
int RemoverR(ListaSEQ *, char *);

/*Exibe lista:*/ //EXIBIR VOID E COLOCA C�DIGOS DE ERRO NA MENSAGEM? OU EXIBIR INT E P�E C�DIGOS DE ERRO?
    // - Sem retorno;
    // - Recebe ponteiro para a lista.
void ExibirLista(ListaSEQ *);

/*Exibe aluno por posi��o na lista:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista;
    // - Recebe posi��o do elemento na lista.
void ExibirAlunoP(ListaSEQ *, int);

/*Exibe aluno por nome:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista
    // - Recebe nome do aluno.
//void ExibirAlunoN(ListaSEQ *, char *);

/*Exibe aluno por RGM:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista
    // - Recebe RGM do aluno.
void ExibirAlunoR(ListaSEQ *, char *);

/*Exibe alunos de um certo curso:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista e posi��o do contao.
//void ExibirAlunosC(ListaSEQ *, int);

#endif // LISTASALUNOS_H_

/*ListaSAlunos.h
- Criar;
- V�lida;
- Vazia;
- Cheia;
- Tamanho ocupado;
- Tamanho restante;
- Inserir elemento + busca bin�ria;
- Procurar elemento por nome*;
- Procurar elemento por RGM;
- Apagar elemento por posi��o;
- Apagar elemento por nome*;
- Apagar elemento por RGM;
- Desloca esq.;
- Desloca dir.;
- Exibir lista;
- Exibir aluno por posi��o;
- Exibir aluno por nome*;
- Exibir aluno por RGM;
- Exibir alunos por curso*.
*/

/*DISCLAIMER*/
// Tamanho e posi��o s�o sempre tratados em termos n�o computacionais, ou seja:
// S�o tratados como tamanho e posi��o convencionais .:. [0] = 1.
