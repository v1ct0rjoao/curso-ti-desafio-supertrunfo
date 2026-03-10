# Desafio: Super Trunfo em C - Nível Novato 🃏

Este projeto faz parte da trilha de aprendizado de **Engenharia de Computação**, focado nos fundamentos da linguagem C. O objetivo é criar a base de um jogo de "Super Trunfo de Países", permitindo o cadastro e a exibição de cartas de cidades.

## 🚀 Objetivo do Desafio
Construir um sistema simples para cadastrar e exibir informações de duas cidades (cartas). O foco principal é praticar:
* Entrada de dados via teclado (`scanf`, `fgets`).
* Manipulação de diferentes tipos de variáveis (`char`, `int`, `float`).
* Saída de dados formatada (`printf`).
* Gerenciamento de buffer de memória.

## 📋 Funcionalidades
O programa permite a inserção dos seguintes dados para duas cartas:
- **Estado:** Uma letra de 'A' a 'H'.
- **Código da Carta:** Letra do estado + número (ex: A01, B03).
- **Nome da Cidade:** Nome completo da cidade (suporta nomes compostos).
- **População:** Número total de habitantes.
- **Área (km²):** Área territorial da cidade.
- **PIB:** Produto Interno Bruto da cidade.
- **Pontos Turísticos:** Quantidade de pontos turísticos disponíveis.

## 🛠️ Tecnologias Utilizadas
* **Linguagem C**: Padrão de ensino para lógica e sistemas.
* **VS Code**: Ambiente de desenvolvimento.
* **Compilador GCC**: Para execução do código.

## 💡 Diferenciais da Minha Implementação
Como o desafio proibia estruturas de repetição e decisão, foquei na **qualidade técnica do código sequencial**:
- **Tratamento de Buffer:** Uso estratégico de `getchar()` e espaços no `scanf` para evitar que o programa pulasse leituras.
- **Nomes Compostos:** Implementação do `fgets` junto com `strcspn` para permitir nomes como "São Paulo" ou "Rio de Janeiro" sem erros.
- **Saída Formatada:** Organização dos dados em colunas legíveis e limitação de casas decimais para o PIB e Área.

## 📖 Como Executar
1. Certifique-se de ter um compilador C instalado (GCC).
2. Clone o repositório ou baixe o arquivo `.c`.
3. Abra o terminal e compile o código:
   ```bash
   gcc super_trunfo.c -o super_trunfo
