#include <stdio.h>

int main() {
    int prova, questao;

    printf("Selecione a prova:\n");
    printf("1 - ESOFT Manha (Turma A)\n");
    printf("2 - ESOFT Manha (Turma B)\n");
    printf("3 - ADS Noite\n");
    printf("Opcao: ");
    scanf("%d", &prova);

    printf("\nSelecione a questao:\n");
    printf("0 - Questao 0\n");
    printf("1 - Questao 1\n");
    printf("2 - Questao 2\n");
    printf("Opcao: ");
    scanf("%d", &questao);

    switch (prova) {
        case 1:
            switch (questao) {
                case 0: {
                    int n1, n2, n3, n4;

                    printf("\n======================================================\n");
                    printf("ENUNCIADO QUESTAO 0 (ESOFT MANHA - TURMA A):\n");
                    printf("Faca um programa que receba 4 numeros inteiros do teclado,\n");
                    printf("verifique quais dos numeros inseridos sao impares, e mostre\n");
                    printf("os que forem multiplos de 5.\n");
                    printf("======================================================\n\n");

                    printf("RESOLUCAO:\n");
                    printf("Digite 4 numeros inteiros: ");
                    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

                    printf("Numeros impares e multiplos de 5:\n");
                    if (n1 % 2 == 1 || n1 % 2 == -1) {
                        if (n1 % 5 == 0) {
                            printf("%d\n", n1);
                        }
                    }
                    if (n2 % 2 == 1 || n2 % 2 == -1) {
                        if (n2 % 5 == 0) {
                            printf("%d\n", n2);
                        }
                    }
                    if (n3 % 2 == 1 || n3 % 2 == -1) {
                        if (n3 % 5 == 0) {
                            printf("%d\n", n3);
                        }
                    }
                    if (n4 % 2 == 1 || n4 % 2 == -1) {
                        if (n4 % 5 == 0) {
                            printf("%d\n", n4);
                        }
                    }
                    break;
                }
                case 1: {
                    int capacidade, qtd_itens, n_mochilas, resto;

                    printf("\n======================================================\n");
                    printf("ENUNCIADO QUESTAO 1 (ESOFT MANHA - TURMA A):\n");
                    printf("Um legendario precisa organizar seus equipamentos para uma viagem\n");
                    printf("utilizando mochilas de capacidade identica. Dada a quantidade total\n");
                    printf("de itens a serem transportados e a capacidade maxima de itens que\n");
                    printf("cabem em cada mochila, informe ao legendario o numero de mochilas\n");
                    printf("que serao totalmente preenchidas pelos seus itens.\n");
                    printf("======================================================\n\n");

                    printf("RESOLUCAO:\n");
                    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
                    scanf("%d", &qtd_itens);
                    printf("Insira a capacidade de itens de cada mochila: \n");
                    scanf("%d", &capacidade);
                    
                    if (capacidade > 0) {
                        n_mochilas = qtd_itens / capacidade;
                        resto = qtd_itens % capacidade; 
                        printf("Legendario, sao %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
                    } else {
                        printf("Capacidade invalida\n");
                    }
                    break;
                }
                case 2: {
                    float valor, resultado;
                    int codigo;

                    printf("\n======================================================\n");
                    printf("ENUNCIADO QUESTAO 2 (ESOFT MANHA - TURMA A):\n");
                    printf("Crie um programa onde sejam inseridos o valor a ser convertido e\n");
                    printf("o codigo da unidade de medida de conversao. Converta e exiba o valor.\n");
                    printf("======================================================\n\n");

                    printf("RESOLUCAO:\n");
                    printf("Digite o valor a ser convertido: ");
                    scanf("%f", &valor);
                    printf("Digite o codigo da conversao (1 a 11): ");
                    scanf("%d", &codigo);

                    switch (codigo) {
                        case 1:
                            resultado = valor * 1.8 + 32;
                            printf("%.2f C = %.2f F\n", valor, resultado);
                            break;
                        case 2:
                            resultado = (valor - 32) / 1.8;
                            printf("%.2f F = %.2f C\n", valor, resultado);
                            break;
                        case 3:
                            resultado = valor + 273.15;
                            printf("%.2f C = %.2f K\n", valor, resultado);
                            break;
                        case 4:
                            resultado = valor - 273.15;
                            printf("%.2f K = %.2f C\n", valor, resultado);
                            break;
                        case 5:
                            resultado = valor / 1609.34;
                            printf("%.2f m = %.6f mi\n", valor, resultado);
                            break;
                        case 6:
                            resultado = valor * 1609.34;
                            printf("%.2f mi = %.2f m\n", valor, resultado);
                            break;
                        case 8:
                            resultado = valor * 2.205;
                            printf("%.2f kg = %.2f lb\n", valor, resultado);
                            break;
                        case 9:
                            resultado = valor / 2.205;
                            printf("%.2f lb = %.2f kg\n", valor, resultado);
                            break;
                        case 10:
                            resultado = valor / 1.609;
                            printf("%.2f km/h = %.2f mph\n", valor, resultado);
                            break;
                        case 11:
                            resultado = valor * 1.609;
                            printf("%.2f mph = %.2f km/h\n", valor, resultado);
                            break;
                        default:
                            printf("Erro: Codigo invalido\n");
                            break;
                    }
                    break;
                }
                default:
                    printf("Questao invalida\n");
                    break;
            }
            break;

        case 2:
            switch (questao) {
                case 0: {
                    int capacidade, qtd_itens, n_mochilas, resto;

                    printf("\n======================================================\n");
                    printf("ENUNCIADO QUESTAO 0 (ESOFT MANHA - TURMA B):\n");
                    printf("Um legendario precisa organizar seus equipamentos para uma viagem\n");
                    printf("utilizando mochilas de capacidade identica. Dada a quantidade total\n");
                    printf("de itens e a capacidade maxima de cada mochila, informe o numero\n");
                    printf("de mochilas totalmente preenchidas e a quantidade de itens que sobram.\n");
                    printf("======================================================\n\n");

                    printf("RESOLUCAO:\n");
                    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
                    scanf("%d", &qtd_itens);
                    printf("Insira a capacidade de itens de cada mochila: \n");
                    scanf("%d", &capacidade);
                    
                    if (capacidade > 0) {
                        n_mochilas = qtd_itens / capacidade;
                        resto = qtd_itens % capacidade; 
                        printf("Legendario, sao %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
                    } else {
                        printf("Capacidade invalida\n");
                    }
                    break;
                }
                case 1: {
                    int a, b, c, aux;

                    printf("\n======================================================\n");
                    printf("ENUNCIADO QUESTAO 1 (ESOFT MANHA - TURMA B):\n");
                    printf("Faca um programa que receba tres numeros inteiros a, b e c.\n");
                    printf("Se algum for igual a outro, imprima 'os numeros tem que ser distintos'.\n");
                    printf("Caso contrario, imprima eles em uma mesma linha em ordem crescente.\n");
                    printf("======================================================\n\n");

                    printf("RESOLUCAO:\n");
                    printf("Digite tres numeros inteiros: ");
                    scanf("%d %d %d", &a, &b, &c);

                    if (a == b || a == c || b == c) {
                        printf("os numeros tem que ser distintos\n");
                    } else {
                        if (a > b) {
                            aux = a;
                            a = b;
                            b = aux;
                        }
                        if (a > c) {
                            aux = a;
                            a = c;
                            c = aux;
                        }
                        if (b > c) {
                            aux = b;
                            b = c;
                            c = aux;
                        }
                        printf("Ordem crescente: %d %d %d\n", a, b, c);
                    }
                    break;
                }
                case 2: {
                    float v1, v2;
                    int op;

                    printf("\n======================================================\n");
                    printf("ENUNCIADO QUESTAO 2 (ESOFT MANHA - TURMA B):\n");
                    printf("Receba dois operandos numericos e um codigo identificador\n");
                    printf("da operacao relacional (1:>, 2:<, 3:==, 4:!=) e informe\n");
                    printf("se a condicao e Verdadeira ou Falsa.\n");
                    printf("======================================================\n\n");

                    printf("RESOLUCAO:\n");
                    printf("Digite o primeiro valor: ");
                    scanf("%f", &v1);
                    printf("Digite o segundo valor: ");
                    scanf("%f", &v2);
                    printf("Digite o codigo da operacao (1 a 4): ");
                    scanf("%d", &op);

                    switch (op) {
                        case 1:
                            if (v1 > v2) {
                                printf("Verdadeiro\n");
                            } else {
                                printf("Falso\n");
                            }
                            break;
                        case 2:
                            if (v1 < v2) {
                                printf("Verdadeiro\n");
                            } else {
                                printf("Falso\n");
                            }
                            break;
                        case 3:
                            if (v1 == v2) {
                                printf("Verdadeiro\n");
                            } else {
                                printf("Falso\n");
                            }
                            break;
                        case 4:
                            if (v1 == v2) {
                                printf("Falso\n");
                            } else {
                                printf("Verdadeiro\n");
                            }
                            break;
                        default:
                            printf("operador invalido\n");
                            break;
                    }
                    break;
                }
                default:
                    printf("Questao invalida\n");
                    break;
            }
            break;

        case 3:
            switch (questao) {
                case 0: {
                    int n1, n2, n3, n4, n5;
                    int encontrou;
                    
                    encontrou = 0;

                    printf("\n======================================================\n");
                    printf("ENUNCIADO QUESTAO 0 (ADS NOITE):\n");
                    printf("Faca um programa que receba 5 numeros inteiros do teclado,\n");
                    printf("verifique se em algum deles sao numeros consecutivos, e mostre\n");
                    printf("os valores que estao em ordem consecutiva.\n");
                    printf("======================================================\n\n");

                    printf("RESOLUCAO:\n");
                    printf("Digite 5 numeros inteiros: ");
                    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

                    printf("Pares consecutivos encontrados:\n");
                    if (n2 == n1 + 1) {
                        printf("%d e %d\n", n1, n2);
                        encontrou = 1;
                    }
                    if (n3 == n2 + 1) {
                        printf("%d e %d\n", n2, n3);
                        encontrou = 1;
                    }
                    if (n4 == n3 + 1) {
                        printf("%d e %d\n", n3, n4);
                        encontrou = 1;
                    }
                    if (n5 == n4 + 1) {
                        printf("%d e %d\n", n4, n5);
                        encontrou = 1;
                    }

                    if (encontrou == 0) {
                        printf("Nenhum par consecutivo encontrado\n");
                    }
                    break;
                }
                case 1: {
                    float peso, altura, imc;

                    printf("\n======================================================\n");
                    printf("ENUNCIADO QUESTAO 1 (ADS NOITE):\n");
                    printf("Calcule o IMC (peso / altura^2) a partir do peso (kg) e altura (m)\n");
                    printf("informados pelo usuario, e exiba a classificacao correspondente.\n");
                    printf("======================================================\n\n");

                    printf("RESOLUCAO:\n");
                    printf("Digite o peso: ");
                    scanf("%f", &peso);
                    printf("Digite a altura: ");
                    scanf("%f", &altura);

                    imc = peso / (altura * altura);
                    printf("IMC: %.2f\n", imc);

                    if (imc < 18.5) {
                        printf("Abaixo do peso\n");
                    } else if (imc <= 24.9) {
                        printf("Normal\n");
                    } else if (imc <= 29.9) {
                        printf("Acima do peso\n");
                    } else {
                        printf("Obeso\n");
                    }
                    break;
                }
                case 2: {
                    int A, B, C;

                    printf("\n======================================================\n");
                    printf("ENUNCIADO QUESTAO 2 (ADS NOITE):\n");
                    printf("Torres de Hanoi: Faca um programa que calcule e mostre as operacoes\n");
                    printf("necessarias para resolver a Torre de Hanoi com 3 discos (A=6, B=0, C=0).\n");
                    printf("======================================================\n\n");

                    printf("RESOLUCAO:\n");
                    A = 6;
                    B = 0;
                    C = 0;
                    
                    printf("Inicio: A=%d, B=%d, C=%d\n\n", A, B, C);

                    A = A - 1;
                    C = C + 1;
                    printf("Mover disco 1 de A para C -> A=%d, B=%d, C=%d\n", A, B, C);

                    A = A - 2;
                    B = B + 2;
                    printf("Mover disco 2 de A para B -> A=%d, B=%d, C=%d\n", A, B, C);

                    C = C - 1;
                    B = B + 1;
                    printf("Mover disco 1 de C para B -> A=%d, B=%d, C=%d\n", A, B, C);

                    A = A - 3;
                    C = C + 3;
                    printf("Mover disco 3 de A para C -> A=%d, B=%d, C=%d\n", A, B, C);

                    B = B - 1;
                    A = A + 1;
                    printf("Mover disco 1 de B para A -> A=%d, B=%d, C=%d\n", A, B, C);

                    B = B - 2;
                    C = C + 2;
                    printf("Mover disco 2 de B para C -> A=%d, B=%d, C=%d\n", A, B, C);

                    A = A - 1;
                    C = C + 1;
                    printf("Mover disco 1 de A para C -> A=%d, B=%d, C=%d\n", A, B, C);

                    printf("\nFim: A=%d, B=%d, C=%d\n", A, B, C);
                    break;
                }
                default:
                    printf("Questao invalida\n");
                    break;
            }
            break;

        default:
            printf("Opcao de prova invalida\n");
            break;
    }

    return 0;
}
