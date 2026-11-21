# Algoritmos de Ordenação

Implementações de três algoritmos clássicos de ordenação, desenvolvidas durante a disciplina de Algoritmos e Estruturas de Dados na Engenharia da Computação (UFAM).

## Algoritmos

| Algoritmo | Melhor caso | Caso médio | Pior caso | Estável |
|---|---|---|---|---|
| Bubble Sort (`bubble_sort.cpp`) | O(n)* | O(n²) | O(n²) | Sim |
| Selection Sort (`selection_sort.cpp`) | O(n²) | O(n²) | O(n²) | Não |
| Quick Sort (`quick_sort.cpp`) | O(n log n) | O(n log n) | O(n²) | Não |

\*O(n) apenas se a implementação tiver a verificação de "nenhuma troca feita".

## Como compilar e executar

```bash
g++ bubble_sort.cpp -o bubble_sort
./bubble_sort
```

Repita o mesmo comando para os outros arquivos, trocando o nome.

## Tecnologias

- C++
- Compilador g++ (GCC)

## Autor

**Théo Martins Oliveira**
Estudante de Engenharia da Computação, UFAM
[LinkedIn](https://www.linkedin.com/in/theo-martins-oliveira-379684450)
