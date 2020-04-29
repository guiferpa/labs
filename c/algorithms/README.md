# Analysis of algorithms

## Loops

```c
for (int i = 1; i < n; i = i * 2) {
  ...
}
```

**n = 10**

| i*2         | i  |
|-------------|----|
| 1 *(1^0)*   | 1  |
| 2 *(2^1)*   | 2  |
| 4 *(2^2)*   | 4  |
| 8 *(2^3)*   | 8  |
| 16 *(2^4)*  | 16 |

> `2^k >= n` - Isso porque o termo `2^k` tende ao infinito, ou seja, uma hora ele vai
chegar ou passar do valor de `n`.

> 2^k = n **-->** k = log(2) n **-->** `O(log n)`

-------------------------------------------------------------------------------------

```c
for (int i = 1; i <= n; i++) {
  ...
}
```

**n = 5**

| i++        | i |
|------------|---|
| 1 *(0+1)*  | 1 |
| 2 *(1+1)*  | 2 |
| 3 *(2+1)*  | 3 |
| 4 *(3+1)*  | 4 |
| 5 *(4+1)*  | 5 |
| 6 *(5+1)*  | 6 |

> `k > n` - Isso porque o a soma na frequência de `k` tende ao infinito, ou seja,
uma hora ela vai passar o valor de `n`.

> k = n **-->** `O(n)`

-------------------------------------------------------------------------------------

```c
for (int i = 1; i * i < n; i++) {
  ...
}
```

**n = 20**

| i++        | i*i        |
|------------|------------|
| 1 *(0+1)*  | 1 *(1^2)*  |
| 2 *(1+1)*  | 4 *(2^2)*  |
| 3 *(2+1)*  | 9 *(3^2)*  |
| 4 *(3+1)*  | 16 *(4^2)* |
| 5 *(4+1)*  | 25 *(5^2)* |

> `k^2 >= n` - Isso porque o termo `k^2` tende ao infinito, ou seja, uma hora ele
vai passar ou se igualar ao valor de `n`.

> k^2 = n **-->** k = √n **-->** `O(√n)`

------------------------------------------------------------------------------------

```c
for (int i = 0; i < n; i++) {
  ...
}

for (int j = 0; j < n; j++) {
  ...
}
```

**n = 5**

| i++        | i |
|------------|---|
| 1 *(0+1)*  | 1 |
| 2 *(1+1)*  | 2 |
| 3 *(2+1)*  | 3 |
| 4 *(3+1)*  | 4 |
| 5 *(4+1)*  | 5 |

> `k(i) >= n` - Isso porque a frequência da soma `k` tende ao infinito, ou seja,
uma hora ela vai passar ou se igualar ao valor de `n`.

> k(i) = `n`

| j++        | j |
|------------|---|
| 1 *(0+1)*  | 1 |
| 2 *(1+1)*  | 2 |
| 3 *(2+1)*  | 3 |
| 4 *(3+1)*  | 4 |
| 5 *(4+1)*  | 5 |

> `k(j) >= n` - Isso porque a frequência da soma `k` tende ao infinito, ou seja,
uma hora ela vai passar ou se igualar ao valor de `n`.

> k(j) = `n`

> (k + k) = (n + n) **-->** 2k = 2n **-->**`O(n)`

----------------------------------------------------------------------------------------

```c
int p = 0;

for (int i = 1; i < n; i = i * 2) {
  p++;
}

for (int j = 1; j < p; j = j * 2) {
  ...
}
```

**n = 5**

| i*2        | p | i |
|------------|---|---|
| 1 *(2^0)*  | 1 | 1 |
| 2 *(2^1)*  | 2 | 2 |
| 4 *(2^2)*  | 3 | 4 |
| 8 *(2^3)*  | 4 | 8 |

> `2^k(i) >= n` - Isso porque o termo `2^k` tende ao infinito, ou seja, uma hora
ele vai passar ou se igualar ao valor de `n`.

> 2^k(i) = n -> k = `log(2) n`

| j*2        | j |
|------------|---|
| 1 *(2^0)*  | 1 |
| 2 *(2^1)*  | 2 |
| 4 *(2^2)*  | 4 |

> `2^k(j) >= p` - Isso porque o termo `2^k` tende ao infinito, ou seja, uma hora
ele vai passar ou se igualar ao valor de `p`.

> p = log n **-->** 2^k(j) = log n **-->** k = log(2) log(2) n **-->** `O(log log n)`

--------------------------------------------------------------------------------------------

```c
for (int i = 0; i < n; i++) {
  for (int j = 1; j < n; j = j*2) {
    ...
  }
}
```

**n = 3**

| i++       | i | j*2       | j |
|-----------|---|-----------|---|
| 1 -> 0+1  | 1 | 1 *(2^0)* | 1 |
| -         | - | 2 *(2^1)* | 2 |
| -         | - | 4 *(2^2)* | 4 |
| 2 -> 1+1  | 2 | 1 *(2^0)* | 1 |
| -         | - | 2 *(2^1)* | 2 |
| -         | - | 4 *(2^2)* | 4 |
| 3 -> 2+1  | 3 | 1 *(2^0)* | 1 |
| -         | - | 2 *(2^1)* | 2 |
| -         | - | 4 *(2^2)* | 4 |

> k(i) = n **-->** k = n

> 2^k(j) = n **-->** k = log(2) n

> k(i) * 2^k(j) = n log(2) n **-->** `O(n log n)`

----------------------------------------------------------------------------------------------

```c
1. if (n < 5) {
2.   ...
3. } else {
4.   for (int i = 0; i < n; i++) {
5.     ...
6.   }
7. }
```

| Linhas | Custo | Caso   |
|--------|-------|--------|
| 1      | 1     | Ambos  |
| 2      | 1     | Melhor |
| 3      | -     | Pior   |
| 4      | n + 1 | Pior   |
| 5      | n     | Pior   |

> `Melhor caso` - f(n) = 2 **-->** `O(1)`

> `Pior caso` - f(n) = 2n + 2 **-->** `O(n)`

------------------------------------------------------------------------------------------------

> `for (int i = 0; i > 1; i++)`: `O(n)`

> `for (int i = 0; i < n; i = i + 2)`: f(n) = n/2 **-->** `O(n)`

> `for (int i = n; i > 1; i--)`: f(n) **-->** `O(n)`

> `for (int i = 1; i < n; i = i * 2)`: **-->** `O(log n)`

> `for (int i = n; i > 1; i = i / 2)`: **-->** `O(log n)`

-------------------------------------------------------------------------------------------------

```c
1. int i = 0;
2. 
3. while (i < n) {
4.   i++;
5. }
```

**n = 5**

| Linhas | Custo |
|--------|-------|
| 1      | 1     |
| 2      | -     |
| 3      | n + 1 |
| 4      | n     |

| i++        | i  |
|------------|----|
| 1 *(0+1)*  | 1  |
| 2 *(1+1)   | 2  |
| 3 *(2+1)*  | 3  |
| 4 *(3+1)*  | 4  |
| 5 *(4+1)*  | 5  |

> k = n **-->** `O(n)`

----------------------------------------------------------

| log n | n  | n^2 | 2^n |
|-------|----|-----|-----|
| 0     | 1  | 1   | 2   |
| 2     | 2  | 4   | 4   |
| 3     | 4  | 16  | 16  |
| 4     | 8  | 64  | 256 |


## Notacões

**O (Big-oh)** - Símbolo do maior custo do algoritmo.
> f(n) = 2n + 3 **-->** 2n + 3 <= 10n | n >= 1

**Ω (Omega)** - Símbolo do menor custo do algoritmo. 
> f(n) = 2n + 3 **-->** 2n + 3 >= log n

**θ (Theta)** - Média do custo do algoritmo.
> f(n) = 2n + 3 **-->** n <= 2n + 3 <= 5n

------------------------------------------------------------

## Regras sobre logaritmos

- log ab = log a + log b
- log a/b = log a - log b
- log a^b = b log a
- a^log c^b = b log c^a
- a^b = n **-->** b = log(a) n

**Comparando funcões**

1. f(n) = n^2 log n | g(n) = n (log n)^10

Vamos aplicar os logaritmos para facilitar a solucão do problema.

```
log[n^2 log n]      | log[n (log n)^10]
log n^2 + log log n | log n log (log n)^10
2 log n + log log n | log n + 10 log log n
```

Solucão: `f(n) > g(n) `

2. f(n) = 3n^√n | g(n) = 2^√n log n

```
3n^√n | 2 log(2) n^√n
3n^√n | (n^√n)^log n^2
3n^√n | (n^√n)^1
```

Solucão: `f(n) = g(n) `

**Verificando se a afirmaćão é verdadeira ou falsa**

1. (n + m)^k = O(n^m)

```
(n + 3)^2 = n^2 + 9
```

Solućão: Verdadeiro

2. 2^(n + 1) = O(2^n)

```
2^(n + 1) = 2^1 + 2^n
```

Solućão: Verdadeiro

3. 2^2n = O(2^n)

```
Vamos assumir que **n = 2**

2^2n = 2^n + 2^n = 8

2^n = 4
```

Solućão: Falso

4. √log n = O(log log n)

`log log n < √log`

Solućão: Falso

5. n^log n = O(2^n)

```
Vamos assumir que **n = 4**

4^3 = 4*4*4 = 64
2^4 = 2*2*2*2 = 32
```

Solućão: Falso
