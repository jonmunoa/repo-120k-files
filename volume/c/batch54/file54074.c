// fichero 54074 -- macros y constantes
#define LIMITE_54074 54174
#define FACTOR_54074 5

int aplicar_limite54074(int valor) {
    if (valor > LIMITE_54074) return LIMITE_54074;
    return valor * FACTOR_54074;
}
