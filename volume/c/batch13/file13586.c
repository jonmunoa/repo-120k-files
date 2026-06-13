// fichero 13586 -- macros y constantes
#define LIMITE_13586 13686
#define FACTOR_13586 2

int aplicar_limite13586(int valor) {
    if (valor > LIMITE_13586) return LIMITE_13586;
    return valor * FACTOR_13586;
}
