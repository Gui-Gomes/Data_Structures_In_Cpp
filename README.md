# DATA STRUCTURES IN C++ | ESTRUTURA DE DADOS EM C++

## Select your language | Selecione seu idioma

- [Português 🇧🇷](#Sobre)
- [English 🇺🇸](#english)

## Sobre
[![estrutura-de-dados-em-cpp.png](https://i.postimg.cc/0N9VzzqN/estrutura-de-dados-em-cpp.png)](https://postimg.cc/jDkH9d2V)

Bem-vindo ao meu repositório dedicado às estruturas de dados em C++. Aqui, você encontrará implementações eficientes e otimizadas de diversas estruturas de dados fundamentais, projetadas para fornecer soluções sólidas e eficazes para problemas comuns de programação.

### Recursos destacáveis:

- **Listas Encadeadas e Duplamente Encadeadas** Implementações flexíveis para manipulação eficiente de dados em sequência.
- **Pilhas e Filas:** Estruturas cruciais para gerenciar dados de forma organizada e simplificar operações de acesso e remoção.
- **Árvores Binárias e AVL:** Soluções hierárquicas para armazenamento e busca eficiente em conjuntos de dados ordenados.
- **Grafos:** Algoritmos essenciais para representação e manipulação de grafos, abrangendo DFS, BFS e outros.

### Objetivo:
Este repositório visa ser um recurso educacional e prático para estudantes e desenvolvedores interessados em aprimorar suas habilidades em estruturas de dados utilizando C++. Sinta-se à vontade para explorar, aprender e contribuir!

### Contribuições:

Sua colaboração é crucial! Sinta-se à vontade para sugerir melhorias, corrigir bugs ou adicionar novas estruturas de dados.

Explore, aprenda e compartilhe conhecimento!

## Índice

- [Instalação](#instalação)
- [Estruturas de Dados Incluídas](#Estruturas-de-Dados-Incluídas)
  - [Lista Duplamente Encadeada](#lista-duplamente-encadeada)
  - [Fila](#fila)
  - [Pilha](#pilha)
- [Contato](#contato)

## Instalação

### Pré-requisitos

Certifique-se de ter o seguinte software instalado em seu sistema: **Compilador C++**

- **Debian/Ubuntu:**
    ```bash
    sudo apt-get update
    sudo apt-get install g++
    ```
- **Arch Linux:**
    ```bash
    sudo pacman -S gcc
    ```
- **Windows:**
    Baixe e instale o [MinGW](https://www.mingw-w64.org/) e adicione o caminho para o compilador ao seu PATH.
- **GCC (Site Oficial):**
    Para outras plataformas, você pode baixar e instalar o compilador C++ a partir do [site oficial do GCC](https://gcc.gnu.org/).

### Compilação do Projeto

1. **Clone o Repositório:**

```bash
git clone https://github.com/Gui-Gomes/Data_Structures_In_Cpp.git
cd Data_Structures_In_Cpp
```
2. **Compilar o arquivo:**

    Navegue até a pasta da estrutura de dados desejada e compile o arquivo.

    - **Compilação automática usando Makefile**
  
        Para compilar o projeto automaticamente, você pode usar o Makefile fornecido. Certifique-se de ter o Make instalado no seu sistema. Para compilar, execute o seguinte comando:

        ```
        make
        ```

        Isso criará o executável `main` no diretório principal.

        - **Compilação Manual**
    
        Utilize o compilador C++ para compilar os arquivos fonte. Por exemplo, para compilar o `main.cpp`, você pode usar o seguinte comando:

        ```
        g++ main.cpp -o main
        ```

        Isso criará o executável `main` no diretório principal.

3. **Execute o Programa:**
   
    ```
    ./main
    ```

    Isso executará o programa de teste para a lista duplamente encadeada.

## Estruturas de Dados Incluídas:

## Lista Duplamente Encadeada

### O que é uma Lista Duplamente Encadeada?

Uma lista duplamente encadeada é uma estrutura de dados na qual cada elemento (nó) contém referências tanto para o próximo quanto para o anterior nó na sequência, permitindo a navegação bidirecional. Isso facilita operações de inserção, exclusão e busca em ambas as direções, proporcionando flexibilidade em manipulação de dados.

**Imagem ilustrativa:**
[![3c2f826b9b662f523fc857cc9eec0b42c73cd77e.png](https://i.postimg.cc/ZK4PFCRt/3c2f826b9b662f523fc857cc9eec0b42c73cd77e.png)](https://postimg.cc/NLCrQGmp)

### O que é um Nó?

Um nó é um elemento individual em uma estrutura de dados que contém informações e referências para outros nós.

**Imagem ilustrativa:**

[![struct.png](https://i.postimg.cc/TwgXqkP9/struct.png)](https://postimg.cc/62WSBfn2)

### Representação em Programação Orientada a Objetos:

Utilizando os conceitos de programação orientada a Objetos, podemos representar tanto o nó quanto a lista como uma classe.

### Node.h

``` cpp
#pragma once
#ifndef NODE_H
#define NODE_H

template <typename T> class Node {
private:
  T data;                   // Data stored in the node
  Node<T> *next, *previous; // Pointers to the next and previous nodes

public:
  // Default constructor
  Node() {
    setNext(nullptr);
    setPrevious(nullptr);
  }

  // Parameterized constructor to initialize the node with data
  Node(T data) {
    setData(data);
    setPrevious(nullptr);
    setNext(nullptr);
  }

  // Setter method to set the data in the node
  void setData(T data) { this->data = data; }

  // Getter method to retrieve the data from the node
  T getData() { return data; }

  // Setter method to set the next node in the sequence
  void setNext(Node<T> *next) { this->next = next; }

  // Getter method to retrieve the next node in the sequence
  Node<T> *getNext() { return next; }

  // Setter method to set the previous node in the sequence
  void setPrevious(Node<T> *previous) { this->previous = previous; }

  // Getter method to retrieve the previous node in the sequence
  Node<T> *getPrevious() { return previous; }
};

#endif

```

### Descrição do `Node.h`:

O arquivo `Node.h` contém a implementação de um nó (Node) para uma lista duplamente encadeada em C++. A utilização de templates permite a criação de nós para armazenar dados de qualquer tipo.

#### Atributos Privados

- `T data`: Armazena os dados do nó.
- `Node<T> *next, *previous`: Ponteiros para o próximo e o nó anterior na sequência.

#### Métodos Públicos

##### Construtores

- `Node()`: Construtor padrão que inicializa `next` e `previous` como `nullptr`.
- `Node(T data)`: Construtor que inicializa `data` com o valor fornecido, `next` e `previous` como `nullptr`.

##### Métodos de Acesso aos Dados

- `void setData(T data)`: Define os dados do nó.
  - **Parâmetros:** `T data` - Novos dados a serem armazenados no nó.
  - **Retorno:** Não possui.
- `T getData()`: Retorna os dados armazenados no nó.
  - **Parâmetros:** Não possui. 
  - **Retorno:** `T` - Dados armazenados no nó.

##### Métodos de Acesso aos Ponteiros

- `void setNext(Node<T> *next)`: Define o próximo nó.
  - **Parâmetros:** `Node<T> *next` - Ponteiro para o próximo nó na sequência.
  - **Retorno:** Não possui.
- `Node<T> *getNext()`: Retorna o ponteiro para o próximo nó.
  - **Parâmetros:** Não possui. 
  - **Retorno:** `Node<T>*` - Ponteiro para o próximo nó.
- `void setPrevious(Node<T> *previous)`: Define o nó anterior.
  - **Parâmetros:** `Node<T> *previous` - Ponteiro para o nó anterior na sequência.
  - **Retorno:** Não possui.
- `Node<T> *getPrevious()`: Retorna o ponteiro para o nó anterior.
  - **Parâmetros:** Não possui. 
  - **Retorno:** `Node<T>*` - Ponteiro para o nó anterior.

### DoublyLinkedList.h:

```cpp
  #pragma once
  #ifndef DOUBLY_LINKED_LIST_H
  #define DOUBLY_LINKED_LIST_H

  #include "Node.h"
  #include <stdexcept>

  template <typename T> class List {
  private:
    Node<T> *head, *tail; // Pointers to the first and last nodes in the list
    int listSize;         // Attribute to store the size of the list

    // Private helper method to set the head of the list
    void setHead(Node<T> *head) { this->head = head; }

    // Private helper method to get the head of the list
    Node<T> *getHead() { return head; }

    // Private helper method to set the tail of the list
    void setTail(Node<T> *tail) { this->tail = tail; }

    // Private helper method to get the tail of the list
    Node<T> *getTail() { return tail; }

    // Private helper method to increment the size of the list
    void incrementList() { listSize++; }

    // Private helper method to decrement the size of the list
    void decrementList() { listSize--; }

    // Private helper method to get the middle index of the list
    int getMiddleIndexOfTheList() { return size() / 2; }

    // Private helper method to get the last index of the list
    int getLastIndexOfTheList() { return size() - 1; }

    // Private helper method to check if the position is valid in the list
    bool isValidPosition(int position) {
      return position <= getLastIndexOfTheList() && position >= 0;
    }

    // Private helper method to get the node at a specific position in the list
    Node<T> *getNodeAtPosition(int position) {
      if (isEmpty() || !isValidPosition(position))
        throw std::out_of_range("Invalid position");

      Node<T> *temp;

      if (position > getMiddleIndexOfTheList()) {
        temp = getTail();
        for (int i = getLastIndexOfTheList(); i > position; i--)
          temp = temp->getPrevious();
      } else {
        temp = getHead();
        for (int i = 0; i < position; i++)
          temp = temp->getNext();
      }

      return temp;
    }

  public:
    // Default constructor
    List() {
      setHead(nullptr);
      setTail(nullptr);
      listSize = 0;
    }

    // Public method to get the size of the list
    int size() { return listSize; }

    // Public method to check if the list is empty
    bool isEmpty() { return size() == 0; }

    // Public method to add a node with data at a specific position in the list
    void add(T data, int position) {
      if (position < 0)
        throw std::out_of_range("Invalid position!");

      Node<T> *newNode = new Node<T>(data);

      if (isEmpty()) {
        setHead(newNode);
        setTail(newNode);
      } else if (position == 0) {
        newNode->setNext(getHead());
        getHead()->setPrevious(newNode);
        setHead(newNode);
      } else if (position == size()) {
        newNode->setPrevious(getTail());
        getTail()->setNext(newNode);
        setTail(newNode);
      } else {
        Node<T> *temp = getNodeAtPosition(position);
        temp->getPrevious()->setNext(newNode);
        newNode->setPrevious(temp->getPrevious());
        newNode->setNext(temp);
        temp->setPrevious(newNode);
      }

      incrementList();
    }

    // Public method to add a node with data at the end of the list
    void add(T data) { add(data, size()); }

    // Public method to remove a node at a specific position in the list
    void remove(int position) {
      if (isEmpty() || !isValidPosition(position))
        throw std::out_of_range("Invalid position!");

      Node<T> *temp = nullptr;

      if (size() == 1) {
        setHead(nullptr);
        setTail(nullptr);
      } else if (position == 0) {
        temp = getHead();
        setHead(getHead()->getNext());
        getHead()->setPrevious(nullptr);
      } else if (position == getLastIndexOfTheList()) {
        temp = getTail();
        setTail(getTail()->getPrevious());
        getTail()->setNext(nullptr);
      } else {
        temp = getNodeAtPosition(position);
        temp->getPrevious()->setNext(temp->getNext());
        temp->getNext()->setPrevious(temp->getPrevious());
      }

      delete temp;

      decrementList();
    }

    // Public method to remove the last node in the list
    void remove() { remove(getLastIndexOfTheList()); }

    // Public method to get the data at a specific position in the list
    T get(int position) {
      if (isEmpty() || !isValidPosition(position))
        throw std::out_of_range("Invalid position!");

      return getNodeAtPosition(position)->getData();
    }

    // Public method to print the entire list using a custom print function
    void printList(void (*printFunction)(T)) {
      for (int i = 0; i < size(); i++)
        printFunction(get(i));
    }

    // Public method to print the data at a specific position in the list using a
    // custom print function
    void printNode(void (*printFunction)(T), int position) {
      printFunction(get(position));
    }

    // Public method to switch the positions of two nodes in the list
    void switchNodes(int position1, int position2) {
      if (isEmpty() || !isValidPosition(position1) ||
          !isValidPosition(position2)) {
        throw std::out_of_range("Invalid position!");
      } else if (position1 == position2) {
        return;
      }

      Node<T> *node1 = getNodeAtPosition(position1);
      Node<T> *node2 = getNodeAtPosition(position2);

      T temp = node1->getData();
      node1->setData(node2->getData());
      node2->setData(temp);
    }

    // Destructor to clean up memory by deleting all nodes in the list
    ~List() {
      while (!isEmpty()) {
        remove();
      }
    }
  };

  #endif
```

### Descrição da DoublyLinkedList.h:

O arquivo `DoublyLinkedList.h` contém a implementação de uma lista duplamente encadeada em C++. A lista é genérica e utiliza templates para permitir armazenar dados de qualquer tipo.

### Atributos Privados

- `Node<T> *head, *tail`: Ponteiros para o primeiro e o último nó na lista.
- `int listSize`: Armazena o tamanho atual da lista.

### Métodos Privados

#### Métodos de Acesso aos Ponteiros

- `void setHead(Node<T> *head)`: Define o ponteiro para o primeiro nó na lista.
- `Node<T> *getHead()`: Retorna o ponteiro para o primeiro nó na lista.
- `void setTail(Node<T> *tail)`: Define o ponteiro para o último nó na lista.
- `Node<T> *getTail()`: Retorna o ponteiro para o último nó na lista.

#### Métodos Auxiliares

- `void incrementList()`: Incrementa o tamanho da lista.
  - **Sem Parâmetros ou Retorno**
- `void decrementList()`: Decrementa o tamanho da lista.
  - **Sem Parâmetros ou Retorno**
- `int getMiddleIndexOfTheList()`: Retorna o índice médio da lista.
  - **Retorno:** `int` - Índice médio da lista.
- `int getLastIndexOfTheList()`: Retorna o último índice da lista.
  - **Retorno:** `int` - Último índice da lista.
- `bool isValidPosition(int position)`: Verifica se a posição é válida na lista.
  - **Parâmetros:**
    - `int position` - Posição a ser verificada.
  - **Retorno:** `bool` - `true` se a posição for válida, `false` caso contrário.
- `Node<T> *getNodeAtPosition(int position)`: Retorna o nó em uma posição específica na lista.
  - **Parâmetros:**
    - `int position` - Posição do nó desejado.
  - **Retorno:** `Node<T>*` - Ponteiro para o nó na posição especificada.

### Métodos Públicos

#### Construtor

- `List()`: Construtor padrão que inicializa `head` e `tail` como `nullptr` e `listSize` como 0.
  - **Sem Parâmetros ou Retorno**

#### Métodos de Informação sobre a Lista

- `int size()`: Retorna o tamanho atual da lista.
  - **Retorno:** `int` - Tamanho atual da lista.
- `bool isEmpty()`: Verifica se a lista está vazia.
  - **Retorno:** `bool` - `true` se a lista estiver vazia, `false` caso contrário.

#### Métodos de Manipulação da Lista

- `void add(T data, int position)`: Adiciona um nó com dados em uma posição específica na lista.
  - **Parâmetros:**
    - `T data` - Dados a serem armazenados no novo nó.
    - `int position` - Posição na lista onde o novo nó será inserido.
      - **Observação:** Se a posição for menor que 0, uma exceção `std::out_of_range` será lançada.
- `void add(T data)`: Adiciona um nó com dados no final da lista.
  - **Parâmetros:**
    - `T data` - Dados a serem armazenados no novo nó.
      - **Observação:** Este método chama `add(data, size())` para inserção no final da lista.
- `void remove(int position)`: Remove um nó em uma posição específica na lista.
  - **Parâmetros:**
    - `int position` - Posição na lista do nó a ser removido.
      - **Observação:** Se a posição for inválida, uma exceção `std::out_of_range` será lançada.
- `void remove()`: Remove o último nó na lista.
  - **Observação:** Este método chama `remove(getLastIndexOfTheList())` para remoção do último nó.
  
#### Métodos de Acesso aos Dados na Lista

- `T get(int position)`: Retorna os dados de um nó em uma posição específica na lista.
  - **Parâmetros:**
    - `int position` - Posição na lista do nó cujos dados serão recuperados.
      - **Observação:** Se a posição for inválida, uma exceção `std::out_of_range` será lançada.
  - **Retorno:** `T` - Dados armazenados no nó na posição especificada.

#### Métodos de Impressão da Lista

- `void printList(void (*printFunction)(T))`: Imprime toda a lista usando uma função de impressão personalizada.
  - **Parâmetros:**
    - `void (*printFunction)(T)` - Ponteiro para uma função que imprime os dados de um nó.
- `void printNode(void (*printFunction)(T), int position)`: Imprime os dados de um nó em uma posição específica usando uma função de impressão personalizada.
  - **Parâmetros:**
    - `void (*printFunction)(T)` - Ponteiro para uma função que imprime os dados de um nó.
    - `int position` - Posição na lista do nó cujos dados serão impressos.
      - **Observação:** Se a posição for inválida, uma exceção `std::out_of_range` será lançada.

#### Outros Métodos

- `void switchNodes(int position1, int position2)`: Troca as posições de dois nós na lista.
  - **Parâmetros:**
    - `int position1`, `int position2` - Posições dos nós a serem trocadas.
      - **Observação:** Se uma das posições for inválida, uma exceção `std::out_of_range` será lançada.
- `~List()`: Destrutor para liberar a memória, excluindo todos os nós na lista.
  - **Sem Parâmetros ou Retorno**