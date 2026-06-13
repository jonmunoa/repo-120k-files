// fichero 32074 -- macros y constantes
#define LIMITE_32074 32174
#define FACTOR_32074 5

int aplicar_limite32074(int valor) {
    if (valor > LIMITE_32074) return LIMITE_32074;
    return valor * FACTOR_32074;
}
