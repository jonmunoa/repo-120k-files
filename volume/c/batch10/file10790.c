// fichero 10790 -- macros y constantes
#define LIMITE_10790 10890
#define FACTOR_10790 1

int aplicar_limite10790(int valor) {
    if (valor > LIMITE_10790) return LIMITE_10790;
    return valor * FACTOR_10790;
}
