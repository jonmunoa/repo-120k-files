// fichero 13586 -- macros y constantes -- MODIFICADO
#define LIMITE_13586 13786
#define FACTOR_13586 3

int aplicar_limite13586(int valor) {
    if (valor > LIMITE_13586) return LIMITE_13586;
    return valor * FACTOR_13586;
}
