#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_ITENS 10

// Estrutura que representa cada item da mochila
    struct Item {
    char nome[30];
    char tipo[20];
    int quantidade;
};

int main() {
    struct Item mochila[MAX_ITENS];
    int qtdItens = 0;  // contador de itens cadastrados
    int opcao;

    do {
        printf("\n===== Mochila =====\n");
        printf("1. Adicionar item\n");
        printf("2. Remover item\n");
        printf("3. Listar itens\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // consumir quebra de linha

        switch (opcao) {
        case 1: // Adicionar
        if (qtdItens < MAX_ITENS) {
        printf("\nDigite o nome do item: ");
        fgets(mochila[qtdItens].nome, 30, stdin);
        mochila[qtdItens].nome[strcspn(mochila[qtdItens].nome, "\n")] = 0;

        printf("Digite o tipo do item: ");
        fgets(mochila[qtdItens].tipo, 20, stdin);
        mochila[qtdItens].tipo[strcspn(mochila[qtdItens].tipo, "\n")] = 0;

        printf("Digite a quantidade: ");
        scanf("%d", &mochila[qtdItens].quantidade);
        getchar();

        qtdItens++;
        printf("Item adicionado com sucesso!\n");
        } else {
        printf("Mochila cheia! Nao e possivel adicionar itens.\n");
        }
        break;

        case 2: { // Remover
        if (qtdItens == 0) {
        printf("Mochila vazia! Nao ha itens para remover.\n");
        break;
        }

        char nomeRemover[30];
        printf("\nDigite o nome do item a remover: ");
        fgets(nomeRemover, 30, stdin);
        nomeRemover[strcspn(nomeRemover, "\n")] = 0;

        int encontrado = 0;
        for (int i = 0; i < qtdItens; i++) {
        if (strcmp(mochila[i].nome, nomeRemover) == 0) {
        // sobrescreve o item removido com o último
        mochila[i] = mochila[qtdItens - 1];
        qtdItens--;
        encontrado = 1;
        printf("Item removido com sucesso!\n");
        break;
        }
        }
        if (!encontrado) {
        printf("Item nao encontrado na mochila.\n");
        }
        break;
        }

        case 3: // Listar
        if (qtdItens == 0) {
        printf("\nMochila vazia!\n");
        } else {
        printf("\n=== ITENS NA MOCHILA ===\n");
        printf("%-20s %-15s %-10s\n", "Nome", "Tipo", "Quantidade");
        printf("------------------------------------------------\n");
        for (int i = 0; i < qtdItens; i++) {
        printf("%-20s %-15s %-10d\n",
        mochila[i].nome,
        mochila[i].tipo,
        mochila[i].quantidade);
        }
        }
        break;

        case 0:
        printf("\nSaindo da mochila...\n");
        break;

        default:
        printf("Opcao invalida! Tente novamente.\n");
        }
        } while (opcao != 0);

return 0;
}

// Código da Ilha – Edição Free Fire
// Nível: Mestre
// Este programa simula o gerenciamento avançado de uma mochila com componentes coletados durante a fuga de uma ilha.
// Ele introduz ordenação com critérios e busca binária para otimizar a gestão dos recursos.

int main() {
    // Menu principal com opções:
    // 1. Adicionar um item
    // 2. Remover um item
    // 3. Listar todos os itens
    // 4. Ordenar os itens por critério (nome, tipo, prioridade)
    // 5. Realizar busca binária por nome
    // 0. Sair

    // A estrutura switch trata cada opção chamando a função correspondente.
    // A ordenação e busca binária exigem que os dados estejam bem organizados.

    return 0;
}

// Struct Item:
// Representa um componente com nome, tipo, quantidade e prioridade (1 a 5).
// A prioridade indica a importância do item na montagem do plano de fuga.

// Enum CriterioOrdenacao:
// Define os critérios possíveis para a ordenação dos itens (nome, tipo ou prioridade).

// Vetor mochila:
// Armazena até 10 itens coletados.
// Variáveis de controle: numItens (quantidade atual), comparacoes (análise de desempenho), ordenadaPorNome (para controle da busca binária).

// limparTela():
// Simula a limpeza da tela imprimindo várias linhas em branco.

// exibirMenu():
// Apresenta o menu principal ao jogador, com destaque para status da ordenação.

// inserirItem():
// Adiciona um novo componente à mochila se houver espaço.
// Solicita nome, tipo, quantidade e prioridade.
// Após inserir, marca a mochila como "não ordenada por nome".

// removerItem():
// Permite remover um componente da mochila pelo nome.
// Se encontrado, reorganiza o vetor para preencher a lacuna.

// listarItens():
// Exibe uma tabela formatada com todos os componentes presentes na mochila.

// menuDeOrdenacao():
// Permite ao jogador escolher como deseja ordenar os itens.
// Utiliza a função insertionSort() com o critério selecionado.
// Exibe a quantidade de comparações feitas (análise de desempenho).

// insertionSort():
// Implementação do algoritmo de ordenação por inserção.
// Funciona com diferentes critérios de ordenação:
// - Por nome (ordem alfabética)
// - Por tipo (ordem alfabética)
// - Por prioridade (da mais alta para a mais baixa)

// buscaBinariaPorNome():
// Realiza busca binária por nome, desde que a mochila esteja ordenada por nome.
// Se encontrar, exibe os dados do item buscado.
// Caso contrário, informa que não encontrou o item.
