// fichero 53910 -- macros y constantes
#define LIMITE_53910 54010
#define FACTOR_53910 1

int aplicar_limite53910(int valor) {
    if (valor > LIMITE_53910) return LIMITE_53910;
    return valor * FACTOR_53910;
}
