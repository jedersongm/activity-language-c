# activity-language-c
Atividade sobre linguagem C - Disciplina Paradigmas de Programação


Lista de Exercícios em C

1. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
numero de dias trabalhados pelo encanador e imprima a quantia líquida que devera ser
paga, sabendo-se que são descontados 8% para imposto de renda.

Entrada Saída
10
11
30
9.2
11.04
27.6

2. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros:
Dia, Mês e Ano. Teste a validade desta data para saber se esta é uma data válida. Teste se o
dia fornecido e um dia válido: dia &gt; 0, dia ≤ 28 para o mês de fevereiro (29 se o ano for
bissexto), dia ≤ 30 em abril, junho, setembro e novembro, dia ≤ 31 nos outros meses. Teste
a validade do mês: mês &gt; 0 e mês &lt; 13. Teste a validade do ano: ano ≤ ano atual (use uma
constante definida com o valor igual a 2018). Imprimir: “data valida” ou “data invalida” no
final da execução do programa. OBS: Sendo que um ano é bissexto se for divisível por 400
ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996.

Entrada Saída
10
10
2018
29
02
2018
data valida

data invalida

3. Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do while.
4. Em Matemática, o número harmônico designado por H(n) define-se como sendo a soma da
serie harmônica: H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n Faça um programa que leia um valor n
inteiro e positivo e apresente o valor de H(n).
Entrada Saída
10
2
4
2.93
1.50
2.08

5. Chico tem 1.50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e
cresce 3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos
serão necessários para que Zé seja maior que Chico.

6. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor.
Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que
caso o usuário digite um número que já foi digitado anteriormente, o programa devera
pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser
pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos.
Exibir na tela o vetor final que foi digitado.
Entrada Saída
1
2
3
3
4
5
6
5
7
8
9
10

digitar outro número
digitar outro número
1
2
3
4
5
6
7
8
9
10

7. Escreva um programa que leia uma matriz de 3 x 3 elementos. Calcule a soma dos
elementos que estão na diagonal secundaria.
Entrada Saída
0 0 1
0 1 0
1 0 0
1 2 3
4 5 6
7 8 9
3

15

8. Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente esses
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem.

Entrada Saída
10
5
3
2
1
4
6
7
8
9

1
2
3
4
5
6
7
8
9

10

9. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo
de substituição na qual cada letra do texto é substituída por outra, que se apresenta no
alfabeto abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de três
posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um
programa que faça uso desse Código de César (3 posições), entre com uma string e retorne
a string codificada.
Exemplo de saída:
Digitada String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova String: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
10. Faça um programa que encontre o conjunto de 5 dígitos consecutivos na sequencia abaixo
que gere o maior produto:

73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

11. Faça uma função recursiva que calcule e retorne o N-esimo termo da sequência Fibonacci.
Alguns números desta sequencia são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
12. Escreva uma função recursiva que calcule a sequencia dada por:
F(1) = 1
F(2) = 2
F(n) = 2 * F(n-1) + 3 * F(n-2)

Entrada Saída
1
2
3
4
7

1
2
7
20
547

13. Implemente a função Split que separa uma string conforme um delimitador. O programa
deve receber como entrada uma string e um delimitador. A saída será expressa como
segue:

Entrada Saída
Separe uma string por espaço em branco
&lt;espaço-em- branco&gt;

Separar-usando- delimitador
-

Separe
uma
string
por
espaço
em
branco
Separar
usando
delimitador

14. Implemente a função in que pesquisa a ocorrência de uma string A em uma string B. Seu
programa deve retornar “True” ou “False”. Veja os exemplos de entrada e saída:

Entrada Saída
mundo
Olamundo
nd
Ola mundo
Ola
ola mundo

True

True

False

15. Faça um programa que leia duas cadeias de caracteres A e B. Determine quantas vezes à
cadeia A ocorre na cadeia B.

Entrada Saída
mundo
Olamundo
o
ola mundo
a
paradigmas
1

2

3

16. Escreva um programa que leia da entrada uma série de temperaturas (em Celsius ou
Fahrenheit) e que imprima a temperatura convertida correspondente (em Fahrenheit ou
Celsius). O fim da série de temperaturas é demarcada pela string &quot;fim&quot;. Seu programa deve
necessariamente conter duas funções que devem ser usadas para fazer as conversões. A
função celsiusToFahrenheit(t) recebe um valor de temperatura em Celsius e retorna a
temperatura correspondente em Fahrenheit. A função fahrenheitToCelsius(t) recebe um
valor de temperatura em Fahrenheit e retorna a temperatura correspondente em Celsius.
Lembrando que Tc/5 = (Tf - 32)/9. Veja o exemplo para entender como são formatadas a
entrada e saída.

Entrada Saída
F 35.7
F 32
C 15.2
fim
C 2.1
C 0.0
F 59.4

17. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
a. Horário: composto de hora, minutos e segundos.
b. Data: composto de dia, mês e ano.
c. Compromisso: composto de uma data, horário e texto que descreve o
compromisso.

18. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma estrutura.
19. Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuário a
informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.

20. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral.
(d) Encontre o aluno com menor media geral.
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6.0
para aprovação.
21. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as variáveis aos ponteiros (use &amp;). Modifique os valores de cada
variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
22. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
23. Faça um programa que usando ponteiros leia 2 valores inteiros e chame uma função que
receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função e chamada passando
duas variáveis A e B, por exemplo e, após a execução da função, A conterá o valor de B e B
terá o valor de A.
24. Crie uma função que receba dois parâmetros: um array de inteiros e um valor do mesmo
tipo do array. A função deverá preencher os elementos de array com esse valor. Não utilize
índices para percorrer o array, apenas aritmética de ponteiros.
25. Escreva uma função que ordene de maneira decrescente (do maior para o menor) um vetor
de inteiros de tamanho n.
