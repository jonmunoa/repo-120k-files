// fichero 53862 -- macros y constantes
#define LIMITE_53862 53962
#define FACTOR_53862 3

int aplicar_limite53862(int valor) {
    if (valor > LIMITE_53862) return LIMITE_53862;
    return valor * FACTOR_53862;
}
