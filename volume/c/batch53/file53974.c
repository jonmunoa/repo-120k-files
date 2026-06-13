// fichero 53974 -- macros y constantes
#define LIMITE_53974 54074
#define FACTOR_53974 5

int aplicar_limite53974(int valor) {
    if (valor > LIMITE_53974) return LIMITE_53974;
    return valor * FACTOR_53974;
}
