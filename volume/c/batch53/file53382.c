// fichero 53382 -- macros y constantes
#define LIMITE_53382 53482
#define FACTOR_53382 3

int aplicar_limite53382(int valor) {
    if (valor > LIMITE_53382) return LIMITE_53382;
    return valor * FACTOR_53382;
}
