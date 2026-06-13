// fichero 45074 -- macros y constantes
#define LIMITE_45074 45174
#define FACTOR_45074 5

int aplicar_limite45074(int valor) {
    if (valor > LIMITE_45074) return LIMITE_45074;
    return valor * FACTOR_45074;
}
