// fichero 7074 -- macros y constantes
#define LIMITE_7074 7174
#define FACTOR_7074 5

int aplicar_limite7074(int valor) {
    if (valor > LIMITE_7074) return LIMITE_7074;
    return valor * FACTOR_7074;
}
