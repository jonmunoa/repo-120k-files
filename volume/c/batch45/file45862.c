// fichero 45862 -- macros y constantes
#define LIMITE_45862 45962
#define FACTOR_45862 3

int aplicar_limite45862(int valor) {
    if (valor > LIMITE_45862) return LIMITE_45862;
    return valor * FACTOR_45862;
}
