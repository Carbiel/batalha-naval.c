# 🚢 Batalha Naval em C

Projeto simples de **Batalha Naval desenvolvido em linguagem C**, com foco no aprendizado de lógica de programação, vetores e matrizes.

---

## 📌 Objetivo

Este projeto foi criado para praticar conceitos fundamentais da programação em C, como:

* Manipulação de matrizes (arrays bidimensionais)
* Estruturas de repetição (loops)
* Organização de código
* Lógica de posicionamento em grade (grid)

---

## 🧠 Funcionalidades

* Tabuleiro 10x10 exibido no console
* Identificação de linhas (1–10) e colunas (A–J)
* Posicionamento de navios:

  * 🚢 Navio horizontal (tamanho 3)
  * 🚢 Navio vertical (tamanho 3)
* Representação visual:

  * `0` → água
  * `3` → parte do navio

---

## 🖥️ Exemplo de saída

```
=============================
   TABULEIRO BATALHA NAVAL   
=============================
    A B C D E F G H I J
1   0 0 0 0 0 0 3 3 3 0
2   0 0 0 0 0 0 0 0 0 0
3   0 0 0 0 0 0 0 0 0 0
4   0 0 3 0 0 0 0 0 0 0
5   0 0 3 0 0 0 0 0 0 0
6   0 0 3 0 0 0 0 0 0 0
7   0 0 0 0 0 0 0 0 0 0
8   0 0 0 0 0 0 0 0 0 0
9   0 0 0 0 0 0 0 0 0 0
10  0 0 0 0 0 0 0 0 0 0
```

---

## ⚙️ Como executar

### 🔹 Compilar

```bash
gcc batalha_naval.c -o batalha
```

### 🔹 Executar

```bash
./batalha
```

> No Windows:

```bash
batalha.exe
```

---

## 📂 Estrutura do código

O programa segue a seguinte lógica:

1. Criação do tabuleiro (matriz 10x10)
2. Inicialização com água (`0`)
3. Posicionamento dos navios (`3`)
4. Exibição do tabuleiro formatado

---

## 🚀 Próximos passos (melhorias)

* [ ] Entrada do usuário (ex: A5)
* [ ] Sistema de ataques
* [ ] Marcação de acertos (`X`) e erros (`~`)
* [ ] Validação de sobreposição de navios
* [ ] Modo multiplayer local
* [ ] Interface melhorada no terminal

---

## 🎯 Aprendizados

Durante o desenvolvimento deste projeto, foram aplicados conceitos como:

* Estruturação de lógica em etapas
* Representação de dados em matriz
* Manipulação de índices
* Organização e legibilidade de código

---

## 📄 Licença

Este projeto é livre para estudo e aprendizado.

---

## 👨‍💻 Autor

Desenvolvido por **Carlos**
