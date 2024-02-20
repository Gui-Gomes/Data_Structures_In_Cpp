# DATA STRUCTURES IN C++ | ESTRUTURA DE DADOS EM C++

## Select your language | Selecione seu idioma

- [Português 🇧🇷](#Sobre)
- [English 🇺🇸](#about)

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
  - [Pilha](#pilha)
  - [Fila](#fila)

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

## Pilha

### O que é uma Pilha(Stack)?

Uma pilha é uma estrutura de dados linear que segue o princípio Last In, First Out (LIFO), onde o último elemento inserido é o primeiro a ser removido. As operações principais são a inserção (push) e a remoção (pop) de elementos, que ocorrem apenas no topo da pilha.

**Imagem ilustrativa:**

![pilha](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221219100314/stack.drawio2.png)

### Representação em Programação Orientada a Objetos:

Aplicando os princípios da programação orientada a objetos, é possível empregar a Lista Duplamente Encadeada previamente criada como base para a implementação da Pilha.

### Stack.h :
```cpp
#pragma once
#ifndef STACK_H
#define STACK_H

#include "../../../Doubly_Linked_List/src/include/DoublyLinkedList.h"
#include <stdexcept>

template <typename T> class Stack {
private:
  List<T> *stack; // Pointer to a Doubly Linked List used as the underlying data
                  // structure for the stack

  // Private method to set the underlying stack
  void setStack(List<T> *stack) { this->stack = stack; }

  // Private method to get the underlying stack
  List<T> *getStack() { return stack; }

public:
  // Constructor: Initializes the stack with a new Doubly Linked List
  Stack() { setStack(new List<T>()); }

  // Destructor: Deletes the underlying Doubly Linked List
  ~Stack() { delete stack; }

  // Returns the size of the stack
  int size() { return getStack()->size(); }

  // Checks if the stack is empty
  bool isEmpty() { return getStack()->isEmpty(); }

  // Pushes an element onto the stack
  T push(T data) {
    getStack()->add(data);
    return data;
  }

  // Pops the top element from the stack
  T pop() {
    if (!isEmpty()) {
      T data = getStack()->get(size() - 1);
      getStack()->remove();
      return data;
    }
    throw std::out_of_range("Invalid position!");
  }

  // Returns the top element of the stack without removing it
  T peek() { return getStack()->get(size() - 1); }
};

#endif

```

### Descrição do Stack.h :

O arquivo `Stack.h` contém a implementação de uma pilha (stack) genérica em C++. A pilha utiliza uma lista duplamente encadeada como a estrutura de dados subjacente para armazenar os elementos.

### Atributos Privados

- `List<T> *stack`: Ponteiro para uma Lista Duplamente Encadeada utilizada como a estrutura de dados subjacente para a pilha.

### Métodos Privados

#### Métodos de Acesso à Lista

- `void setStack(List<T> *stack)`: Define a lista duplamente encadeada utilizada como pilha.
  - **Parâmetros:** `List<T> *stack` - Ponteiro para a lista duplamente encadeada.
  - **Sem Retorno**
- `List<T> *getStack()`: Retorna o ponteiro para a lista duplamente encadeada.
  - **Sem Parâmetros**
  - **Retorno:** `List<T>*` - Ponteiro para a lista duplamente encadeada.

### Métodos Públicos

#### Construtor

- `Stack()`: Construtor que inicializa a pilha com uma nova Lista Duplamente Encadeada.
  - **Sem Parâmetros ou Retorno**

#### Destrutor

- `~Stack()`: Destrutor que deleta a Lista Duplamente Encadeada subjacente.
  - **Sem Parâmetros ou Retorno**

#### Métodos de Informação sobre a Pilha

- `int size()`: Retorna o tamanho atual da pilha.
  - **Retorno:** `int` - Tamanho atual da pilha.
- `bool isEmpty()`: Verifica se a pilha está vazia.
  - **Retorno:** `bool` - `true` se a pilha estiver vazia, `false` caso contrário.

#### Métodos de Manipulação da Pilha

- `T push(T data)`: Adiciona um elemento ao topo da pilha.
  - **Parâmetros:**
    - `T data` - Dados a serem armazenados no novo elemento.
  - **Retorno:** `T` - Dados armazenados no elemento adicionado.
- `T pop()`: Remove e retorna o elemento do topo da pilha.
  - **Retorno:** `T` - Dados do elemento removido.
  - **Observação:** Se a pilha estiver vazia, uma exceção `std::out_of_range` será lançada.
- `T peek()`: Retorna o elemento do topo da pilha sem removê-lo.
  - **Retorno:** `T` - Dados do elemento do topo da pilha.

## Fila

### O que é uma Fila (Queue):

Uma fila em estrutura de dados é uma coleção ordenada de elementos onde a remoção ocorre sempre no início (front) e a inserção ocorre sempre no final (rear), seguindo o princípio FIFO (First-In-First-Out).

**Imagem ilustrativa:**

![queue](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221213113312/Queue-Data-Structures.png)

### Representação em Programação Orientada a Objetos:

Utilizando os fundamentos da programação orientada a objetos, é viável utilizar a Lista Duplamente Encadeada que foi criada anteriormente como estrutura base para desenvolver a Fila, de maneira análoga ao que foi realizado com a Pilha.

### Queue.h :

```cpp
#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include "../../../Doubly_Linked_List/src/include/DoublyLinkedList.h"

template <typename T> class Queue {
private:
  List<T> *queue;

  // Private helper function to set the internal queue
  void setQueue(List<T> *queue) { this->queue = queue; }

  // Private helper function to get the internal queue
  List<T> *getQueue() { return queue; }

public:
  // Constructor: initializes the queue with a new List
  Queue() { setQueue(new List<T>()); }

  // Destructor: deletes the internal queue
  ~Queue() { delete queue; }

  // Checks if the queue is empty
  bool isEmpty() { return getQueue()->isEmpty(); }

  // Returns the size of the queue
  int size() { return getQueue()->size(); }

  // Adds an element to the end of the queue
  T add(T data) {
    getQueue()->add(data);
    return data;
  }

  // Retrieves the element at the front of the queue without removing it
  T front() { return getQueue()->get(0); }

  // Offers an element at a specified position in the queue
  T offer(T data, int position) {
    getQueue()->add(data, position);
    return data;
  }

  // Removes and returns the element at the front of the queue
  T remove() {
    T data = getQueue()->get(0);
    getQueue()->remove(0);
    return data;
  }
};

#endif

```

### Descrição da Queue.h :

O arquivo `Queue.h` contém a implementação de uma fila (queue) genérica em C++. A fila utiliza uma lista duplamente encadeada como a estrutura de dados subjacente para armazenar os elementos.

### Atributos Privados

- `List<T> *queue`: Ponteiro para uma Lista Duplamente Encadeada utilizada como a estrutura de dados subjacente para a fila.

### Métodos Privados

#### Métodos de Acesso à Lista

- `void setQueue(List<T> *queue)`: Define a lista duplamente encadeada utilizada como fila.
  - **Parâmetros:** `List<T> *queue` - Ponteiro para a lista duplamente encadeada.
  - **Sem Retorno**
- `List<T> *getQueue()`: Retorna o ponteiro para a lista duplamente encadeada.
  - **Retorno:** `List<T>*` - Ponteiro para a lista duplamente encadeada.

### Métodos Públicos

#### Construtor

- `Queue()`: Construtor que inicializa a fila com uma nova Lista Duplamente Encadeada.
  - **Sem Parâmetros ou Retorno**

#### Destrutor

- `~Queue()`: Destrutor que deleta a Lista Duplamente Encadeada subjacente.
  - **Sem Parâmetros ou Retorno**

#### Métodos de Informação sobre a Fila

- `bool isEmpty()`: Verifica se a fila está vazia.
  - **Retorno:** `bool` - `true` se a fila estiver vazia, `false` caso contrário.
- `int size()`: Retorna o tamanho atual da fila.
  - **Retorno:** `int` - Tamanho atual da fila.

#### Métodos de Manipulação da Fila

- `T add(T data)`: Adiciona um elemento ao final da fila.
  - **Parâmetros:**
    - `T data` - Dados a serem armazenados no novo elemento.
  - **Retorno:** `T` - Dados armazenados no elemento adicionado.
- `T front()`: Retorna o elemento na frente da fila sem removê-lo.
  - **Retorno:** `T` - Dados do elemento na frente da fila.
- `T offer(T data, int position)`: Oferece um elemento em uma posição específica na fila.
  - **Parâmetros:**
    - `T data` - Dados a serem armazenados no novo elemento.
    - `int position` - Posição na fila onde o novo elemento será oferecido.
      - **Observação:** Se a posição for menor que 0 ou maior que o tamanho atual da fila, o elemento será adicionado no final da fila.
  - **Retorno:** `T` - Dados armazenados no elemento oferecido.
- `T remove()`: Remove e retorna o elemento na frente da fila.
  - **Retorno:** `T` - Dados do elemento removido.
  - **Observação:** Se a fila estiver vazia, uma exceção `std::out_of_range` será lançada.

# English Version 🇺🇸

## About

[![data-structures-in-cpp.png](https://i.postimg.cc/G2CsZ6PN/data-structures-in-cpp.png)](https://postimg.cc/8FZ5vK0B)

Welcome to my repository dedicated to data structures in C++. Here, you will find efficient and optimized implementations of various fundamental data structures, designed to provide robust and effective solutions for common programming problems.

### Featured Resources:

- **Linked Lists and Doubly Linked Lists:** Flexible implementations for efficient data manipulation in sequences.
- **Stacks and Queues:** Crucial structures for organized data management, simplifying access and removal operations.
- **Binary Trees and AVL Trees:** Hierarchical solutions for efficient storage and search in ordered datasets.
- **Graphs:** Essential algorithms for representation and manipulation of graphs, covering DFS, BFS, and others.

### Objective:
This repository aims to be an educational and practical resource for students and developers interested in enhancing their skills in data structures using C++. Feel free to explore, learn, and contribute!

### Contributions:

Your collaboration is crucial! Feel free to suggest improvements, fix bugs, or add new data structures.

Explore, learn, and share knowledge!

## Index

- [Installation](#installation)
- [Included Data Structures](#included-data-structures)
  - [Doubly Linked List](#doubly-linked-list)
  - [Stack](#stack)
  - [Queue](#queue)


## Installation

### Prerequisites

Make sure you have the following software installed on your system: **C++ Compiler**

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
    Download and install [MinGW](https://www.mingw-w64.org/) and add the compiler's path to your PATH.
- **GCC (Official Website):**
    For other platforms, you can download and install the C++ compiler from the [official GCC website](https://gcc.gnu.org/).

### Project Compilation

1. **Clone the Repository:**

    ```bash
    git clone https://github.com/Gui-Gomes/Data_Structures_In_Cpp.git
    cd Data_Structures_In_Cpp
    ```

2. **Compile the File:**

    Navigate to the folder of the desired data structure and compile the file.

    - **Automatic Compilation using Makefile**
  
      To compile the project automatically, you can use the provided Makefile. Make sure you have Make installed on your system. To compile, run the following command:

      ```
      make
      ```

      This will create the `main` executable in the main directory.

    - **Manual Compilation**
    
      Use the C++ compiler to compile the source files. For example, to compile `main.cpp`, you can use the following command:

      ```
      g++ main.cpp -o main
      ```

      This will create the `main` executable in the main directory.

3. **Run the Program:**
   
    ```
    ./main
    ```

    This will execute the test program for the doubly linked list.

## Included Data Structures:

## Doubly Linked List

### What is a Doubly Linked List?

A doubly linked list is a data structure in which each element (node) contains references to both the next and previous nodes in the sequence, allowing bidirectional navigation. This facilitates operations such as insertion, deletion, and search in both directions, providing flexibility in data manipulation.

**Illustrative Image:**
[![3c2f826b9b662f523fc857cc9eec0b42c73cd77e.png](https://i.postimg.cc/ZK4PFCRt/3c2f826b9b662f523fc857cc9eec0b42c73cd77e.png)](https://postimg.cc/NLCrQGmp)

### What is a Node?

A node is an individual element in a data structure that contains information and references to other nodes.

**Illustrative Image:**

[![struct.png](https://i.postimg.cc/TwgXqkP9/struct.png)](https://postimg.cc/62WSBfn2)

### Representation in Object-Oriented Programming:

Using the concepts of object-oriented programming, we can represent both the node and the list as a class.

### Node.h :

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

### Description of `Node.h`:

The `Node.h` file contains the implementation of a node for a doubly linked list in C++. The use of templates allows the creation of nodes to store data of any type.

#### Private Attributes

- `T data`: Stores the data of the node.
- `Node<T> *next, *previous`: Pointers to the next and previous nodes in the sequence.

#### Public Methods

##### Constructors

- `Node()`: Default constructor that initializes `next` and `previous` as `nullptr`.
- `Node(T data)`: Constructor that initializes `data` with the provided value, `next` and `previous` as `nullptr`.

##### Data Access Methods

- `void setData(T data)`: Sets the node's data.
  - **Parameters:** `T data` - New data to be stored in the node.
  - **Return:** None.
- `T getData()`: Returns the data stored in the node.
  - **Parameters:** None.
  - **Return:** `T` - Data stored in the node.

##### Pointer Access Methods

- `void setNext(Node<T> *next)`: Sets the next node.
  - **Parameters:** `Node<T> *next` - Pointer to the next node in the sequence.
  - **Return:** None.
- `Node<T> *getNext()`: Returns the pointer to the next node.
  - **Parameters:** None.
  - **Return:** `Node<T>*` - Pointer to the next node.
- `void setPrevious(Node<T> *previous)`: Sets the previous node.
  - **Parameters:** `Node<T> *previous` - Pointer to the previous node in the sequence.
  - **Return:** None.
- `Node<T> *getPrevious()`: Returns the pointer to the previous node.
  - **Parameters:** None.
  - **Return:** `Node<T>*` - Pointer to the previous node.

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

### Description of `DoublyLinkedList.h`:

The `DoublyLinkedList.h` file contains the implementation of a doubly linked list in C++. The list is generic and uses templates to allow storing data of any type.

### Private Attributes

- `Node<T> *head, *tail`: Pointers to the first and last nodes in the list.
- `int listSize`: Stores the current size of the list.

### Private Methods

#### Pointer Access Methods

- `void setHead(Node<T> *head)`: Sets the pointer to the first node in the list.
- `Node<T> *getHead()`: Returns the pointer to the first node in the list.
- `void setTail(Node<T> *tail)`: Sets the pointer to the last node in the list.
- `Node<T> *getTail()`: Returns the pointer to the last node in the list.

#### Helper Methods

- `void incrementList()`: Increments the size of the list.
  - **No Parameters or Return**
- `void decrementList()`: Decrements the size of the list.
  - **No Parameters or Return**
- `int getMiddleIndexOfTheList()`: Returns the middle index of the list.
  - **Return:** `int` - Middle index of the list.
- `int getLastIndexOfTheList()`: Returns the last index of the list.
  - **Return:** `int` - Last index of the list.
- `bool isValidPosition(int position)`: Checks if the position is valid in the list.
  - **Parameters:**
    - `int position` - Position to be checked.
  - **Return:** `bool` - `true` if the position is valid, `false` otherwise.
- `Node<T> *getNodeAtPosition(int position)`: Returns the node at a specific position in the list.
  - **Parameters:**
    - `int position` - Position of the desired node.
  - **Return:** `Node<T>*` - Pointer to the node at the specified position.

### Public Methods

#### Constructor

- `List()`: Default constructor that initializes `head` and `tail` as `nullptr` and `listSize` as 0.
  - **No Parameters or Return**

#### List Information Methods

- `int size()`: Returns the current size of the list.
  - **Return:** `int` - Current size of the list.
- `bool isEmpty()`: Checks if the list is empty.
  - **Return:** `bool` - `true` if the list is empty, `false` otherwise.

#### List Manipulation Methods

- `void add(T data, int position)`: Adds a node with data at a specific position in the list.
  - **Parameters:**
    - `T data` - Data to be stored in the new node.
    - `int position` - Position in the list where the new node will be inserted.
      - **Note:** If the position is less than 0, a `std::out_of_range` exception will be thrown.
- `void add(T data)`: Adds a node with data at the end of the list.
  - **Parameters:**
    - `T data` - Data to be stored in the new node.
      - **Note:** This method calls `add(data, size())` for insertion at the end of the list.
- `void remove(int position)`: Removes a node at a specific position in the list.
  - **Parameters:**
    - `int position` - Position in the list of the node to be removed.
      - **Note:** If the position is invalid, a `std::out_of_range` exception will be thrown.
- `void remove()`: Removes the last node in the list.
  - **Note:** This method calls `remove(getLastIndexOfTheList())` for removal of the last node.

#### Data Access Methods in the List

- `T get(int position)`: Returns the data of a node at a specific position in the list.
  - **Parameters:**
    - `int position` - Position in the list of the node whose data will be retrieved.
      - **Note:** If the position is invalid, a `std::out_of_range` exception will be thrown.
  - **Return:** `T` - Data stored in the node at the specified position.

#### List Printing Methods

- `void printList(void (*printFunction)(T))`: Prints the entire list using a custom print function.
  - **Parameters:**
    - `void (*printFunction)(T)` - Pointer to a function that prints the data of a node.
- `void printNode(void (*printFunction)(T), int position)`: Prints the data of a node at a specific position using a custom print function.
  - **Parameters:**
    - `void (*printFunction)(T)` - Pointer to a function that prints the data of a node.
    - `int position` - Position in the list of the node whose data will be printed.
      - **Note:** If the position is invalid, a `std::out_of_range` exception will be thrown.

#### Other Methods

- `void switchNodes(int position1, int position2)`: Swaps the positions of two nodes in the list.
  - **Parameters:**
    - `int position1`, `int position2` - Positions of the nodes to be swapped.
      - **Note:** If either position is invalid, a `std::out_of_range` exception will be thrown.
- `~List()`: Destructor to free memory by deleting all nodes in the list.
  - **No Parameters or Return**

## Stack

### What is a Stack?

A stack is a linear data structure that follows the Last In, First Out (LIFO) principle, where the last element inserted is the first to be removed. The main operations are insertion (push) and removal (pop) of elements, which occur only at the top of the stack.

**Illustrative Image:**

![stack](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221219100314/stack.drawio2.png)

### Representation in Object-Oriented Programming:

Applying the principles of object-oriented programming, it is possible to use the previously created Doubly Linked List as a basis for implementing the Stack.

### Stack.h :
```cpp
#pragma once
#ifndef STACK_H
#define STACK_H

#include "../../../Doubly_Linked_List/src/include/DoublyLinkedList.h"
#include <stdexcept>

template <typename T> class Stack {
private:
  List<T> *stack; // Pointer to a Doubly Linked List used as the underlying data
                  // structure for the stack

  // Private method to set the underlying stack
  void setStack(List<T> *stack) { this->stack = stack; }

  // Private method to get the underlying stack
  List<T> *getStack() { return stack; }

public:
  // Constructor: Initializes the stack with a new Doubly Linked List
  Stack() { setStack(new List<T>()); }

  // Destructor: Deletes the underlying Doubly Linked List
  ~Stack() { delete stack; }

  // Returns the size of the stack
  int size() { return getStack()->size(); }

  // Checks if the stack is empty
  bool isEmpty() { return getStack()->isEmpty(); }

  // Pushes an element onto the stack
  T push(T data) {
    getStack()->add(data);
    return data;
  }

  // Pops the top element from the stack
  T pop() {
    if (!isEmpty()) {
      T data = getStack()->get(size() - 1);
      getStack()->remove();
      return data;
    }
    throw std::out_of_range("Invalid position!");
  }

  // Returns the top element of the stack without removing it
  T peek() { return getStack()->get(size() - 1); }
};

#endif

```

### Description of `Stack.h`:

The `Stack.h` file contains the implementation of a generic stack in C++. The stack uses a doubly linked list as the underlying data structure to store elements.

### Private Attributes

- `List<T> *stack`: Pointer to a Doubly Linked List used as the underlying data structure for the stack.

### Private Methods

#### List Access Methods

- `void setStack(List<T> *stack)`: Sets the doubly linked list used as the stack.
  - **Parameters:** `List<T> *stack` - Pointer to the doubly linked list.
  - **No Return**
- `List<T> *getStack()`: Returns the pointer to the doubly linked list.
  - **No Parameters**
  - **Return:** `List<T>*` - Pointer to the doubly linked list.

### Public Methods

#### Constructor

- `Stack()`: Constructor that initializes the stack with a new Doubly Linked List.
  - **No Parameters or Return**

#### Destructor

- `~Stack()`: Destructor that deletes the underlying Doubly Linked List.
  - **No Parameters or Return**

#### Stack Information Methods

- `int size()`: Returns the current size of the stack.
  - **Return:** `int` - Current size of the stack.
- `bool isEmpty()`: Checks if the stack is empty.
  - **Return:** `bool` - `true` if the stack is empty, `false` otherwise.

#### Stack Manipulation Methods

- `T push(T data)`: Adds an element to the top of the stack.
  - **Parameters:**
    - `T data` - Data to be stored in the new element.
  - **Return:** `T` - Data stored in the added element.
- `T pop()`: Removes and returns the element from the top of the stack.
  - **Return:** `T` - Data of the removed element.
  - **Note:** If the stack is empty, a `std::out_of_range` exception will be thrown.
- `T peek()`: Returns the element from the top of the stack without removing it.
  - **Return:** `T` - Data of the element from the top of the stack.

## Queue

### What is a Queue?

In data structures, a queue is an ordered collection of elements where removal always occurs at the front, and insertion always occurs at the rear, following the First-In-First-Out (FIFO) principle.

**Illustrative Image:**

![queue](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221213113312/Queue-Data-Structures.png)

### Representation in Object-Oriented Programming:

By utilizing the principles of object-oriented programming, it is feasible to use the previously created Doubly Linked List as a foundational structure to develop the Queue, analogous to what was done with the Stack.

### Queue.h :

```cpp
#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include "../../../Doubly_Linked_List/src/include/DoublyLinkedList.h"

template <typename T> class Queue {
private:
  List<T> *queue;

  // Private helper function to set the internal queue
  void setQueue(List<T> *queue) { this->queue = queue; }

  // Private helper function to get the internal queue
  List<T> *getQueue() { return queue; }

public:
  // Constructor: initializes the queue with a new List
  Queue() { setQueue(new List<T>()); }

  // Destructor: deletes the internal queue
  ~Queue() { delete queue; }

  // Checks if the queue is empty
  bool isEmpty() { return getQueue()->isEmpty(); }

  // Returns the size of the queue
  int size() { return getQueue()->size(); }

  // Adds an element to the end of the queue
  T add(T data) {
    getQueue()->add(data);
    return data;
  }

  // Retrieves the element at the front of the queue without removing it
  T front() { return getQueue()->get(0); }

  // Offers an element at a specified position in the queue
  T offer(T data, int position) {
    getQueue()->add(data, position);
    return data;
  }

  // Removes and returns the element at the front of the queue
  T remove() {
    T data = getQueue()->get(0);
    getQueue()->remove(0);
    return data;
  }
};

#endif

```

### Description of `Queue.h`:

The `Queue.h` file contains the implementation of a generic queue in C++. The queue uses a doubly linked list as the underlying data structure to store elements.

### Private Attributes

- `List<T> *queue`: Pointer to a Doubly Linked List used as the underlying data structure for the queue.

### Private Methods

#### List Access Methods

- `void setQueue(List<T> *queue)`: Sets the doubly linked list used as the queue.
  - **Parameters:** `List<T> *queue` - Pointer to the doubly linked list.
  - **No Return**
- `List<T> *getQueue()`: Returns the pointer to the doubly linked list.
  - **No Parameters**
  - **Return:** `List<T>*` - Pointer to the doubly linked list.

### Public Methods

#### Constructor

- `Queue()`: Constructor that initializes the queue with a new Doubly Linked List.
  - **No Parameters or Return**

#### Destructor

- `~Queue()`: Destructor that deletes the underlying Doubly Linked List.
  - **No Parameters or Return**

#### Queue Information Methods

- `bool isEmpty()`: Checks if the queue is empty.
  - **Return:** `bool` - `true` if the queue is empty, `false` otherwise.
- `int size()`: Returns the current size of the queue.
  - **Return:** `int` - Current size of the queue.

#### Queue Manipulation Methods

- `T add(T data)`: Adds an element to the end of the queue.
  - **Parameters:**
    - `T data` - Data to be stored in the new element.
  - **Return:** `T` - Data stored in the added element.
- `T front()`: Returns the element at the front of the queue without removing it.
  - **Return:** `T` - Data of the element at the front of the queue.
- `T offer(T data, int position)`: Offers an element at a specific position in the queue.
  - **Parameters:**
    - `T data` - Data to be stored in the new element.
    - `int position` - Position in the queue where the new element will be offered.
      - **Note:** If the position is less than 0 or greater than the current size of the queue, the element will be added to the end of the queue.
  - **Return:** `T` - Data stored in the offered element.
- `T remove()`: Removes and returns the element at the front of the queue.
  - **Return:** `T` - Data of the removed element.
  - **Note:** If the queue is empty, a `std::out_of_range` exception will be thrown.
