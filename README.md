# Cifra-de-Cezar-criptografia-
# Criptografia Simples em C

## Integrantes do grupo 
Caroline Barroso de Oliveira RGM: 4806351-7
Maria Eduarda Koskievitcz Ferreira RGM: 4790715-1
Danielly Mariano da Costa RGM: 4781783-6

## Objetivo

Desenvolver um programa em linguagem C que utilize
criptografia simples juntamente com conceitos de
Progressão Aritmética (PA).

## Funcionamento

O programa recebe:

- Uma palavra de até 15 letras;
- Um valor de SHIFT;
- Uma Progressão Aritmética.

A criptografia utiliza duas camadas:

1. Cifra de César utilizando o SHIFT;
2. Deslocamento adicional utilizando o termo da PA.

## Fórmula da PA

aₙ = a₁ + (n - 1) · r

Neste projeto:

a₁ = 1
r = 1

Portanto, a sequência utilizada é:

1, 2, 3, 4, 5...

## Arquivos

- criptografia.c → código-fonte do programa
- resultado_criptografia.txt → resultado da criptografia
- log_execucao.txt → registro da execução
- README.md → documentação do projeto

## Exemplo de saída
LOG DE EXECUCAO 
Palavra original: disciplina
Palavra codificada: hnyjqyvtzn
SHIFT: 3
Primeiro termo da PA: 1
Razao da PA: 1
Letras: 10
Tipo: PA
