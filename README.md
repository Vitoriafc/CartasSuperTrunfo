Projeto Super Trunfo - Países

Este projeto de Super Trunfo simula o jogo em três níveis de dificuldade usando a linguagem C, estruturas de decisão e cálculos com variáveis.

---

Nível Novato
O desafio inicial foca no cadastro de dados. O programa permite ao usuário inserir os atributos de duas cartas via terminal e os exibe de forma organizada, um por linha.

Nível Aventureiro
Este nível expande o sistema para incluir o cálculo de novos atributos: Densidade Populacional e PIB per Capita. O programa lê os dados das duas cartas e exibe os resultados dos cálculos.

Nível Mestre
O desafio final implementa a comparação entre duas cartas. O programa calcula o "Super Poder" (soma de atributos com a densidade populacional invertida) e compara as cartas em cada atributo, mostrando a vencedora.

---

Como Rodar o Projeto
1. No arquivo `main.c`, **descomente o bloco de código do Nível** que você deseja executar e certifique-se de que os outros níveis estão com `/*` e `*/`.
2. Abra o terminal na pasta do projeto no VS Code.
3. Use o comando `gcc` para compilar o código:
   gcc main.c -o supertrunfo
4. Execute o programa compilado:
   .\supertrunfo.exe