// fichero 14106 -- macros y constantes
#define LIMITE_14106 14206
#define FACTOR_14106 2

int aplicar_limite14106(int valor) {
    if (valor > LIMITE_14106) return LIMITE_14106;
    return valor * FACTOR_14106;
}
