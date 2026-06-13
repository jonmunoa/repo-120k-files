// fichero 41862 -- macros y constantes
#define LIMITE_41862 41962
#define FACTOR_41862 3

int aplicar_limite41862(int valor) {
    if (valor > LIMITE_41862) return LIMITE_41862;
    return valor * FACTOR_41862;
}
