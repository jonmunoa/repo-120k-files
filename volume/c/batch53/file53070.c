// fichero 53070 -- macros y constantes
#define LIMITE_53070 53170
#define FACTOR_53070 1

int aplicar_limite53070(int valor) {
    if (valor > LIMITE_53070) return LIMITE_53070;
    return valor * FACTOR_53070;
}
