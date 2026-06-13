// fichero 22074 -- macros y constantes
#define LIMITE_22074 22174
#define FACTOR_22074 5

int aplicar_limite22074(int valor) {
    if (valor > LIMITE_22074) return LIMITE_22074;
    return valor * FACTOR_22074;
}
