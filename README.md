## Bubble Sort Otimizado 🫧🚀

Este código C implementa o algoritmo de ordenação Bubble Sort com uma otimização importante: a verificação se houve trocas em cada iteração. 🔄

### 💡 O Que é Bubble Sort?

O Bubble Sort é um algoritmo de ordenação simples que percorre repetidamente uma lista, comparando elementos adjacentes e trocando-os de lugar se estiverem na ordem errada. O processo continua até que nenhum elemento precise ser trocado, indicando que a lista está ordenada.

### ⚡ Otimização: Verificação de Trocas

A versão otimizada do Bubble Sort introduz uma variável `swapped` para rastrear se houve trocas em uma determinada iteração. Se nenhuma troca for feita, significa que a lista já está ordenada e o algoritmo pode terminar mais cedo.

### 🛠️ Como Funciona?

1. **Inicialização:** A variável `swapped` é definida como 1 para garantir que o loop externo seja executado pelo menos uma vez.
2. **Loop Externo:** Itera sobre a lista, controlando o número de elementos a serem comparados em cada passagem.
3. **Loop Interno:** Percorre os elementos a serem comparados, trocando-os se estiverem fora de ordem. Se uma troca for feita, `swapped` é definido como 1.
4. **Verificação de Trocas:** Após cada iteração do loop externo, verifica-se o valor de `swapped`. Se for 0, o algoritmo termina, pois a lista já está ordenada.

### ⚙️ Funções

* **`swap(int *x, int *y)`:** Troca os valores de duas variáveis.
* **`bubbleSort(int vetor[], int tam)`:** Implementa o Bubble Sort otimizado.
* **`printarvetor(int vetor[], int tam)`:** Imprime os elementos de um vetor.

### 🚀 Exemplo de Uso

```
37 2 9 15 42
2 9 15 37 42
```

**Observação:** Este projeto é apenas para fins de aprendizado e demonstração. 🧠
