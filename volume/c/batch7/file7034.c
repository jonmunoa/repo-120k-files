// fichero 7034 -- macros y constantes
#define LIMITE_7034 7134
#define FACTOR_7034 5

int aplicar_limite7034(int valor) {
    if (valor > LIMITE_7034) return LIMITE_7034;
    return valor * FACTOR_7034;
}
