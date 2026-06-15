// fichero 38946 -- macros y constantes -- MODIFICADO
#define LIMITE_38946 39146
#define FACTOR_38946 3

int aplicar_limite38946(int valor) {
    if (valor > LIMITE_38946) return LIMITE_38946;
    return valor * FACTOR_38946;
}
