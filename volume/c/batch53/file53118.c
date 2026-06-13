// fichero 53118 -- macros y constantes
#define LIMITE_53118 53218
#define FACTOR_53118 4

int aplicar_limite53118(int valor) {
    if (valor > LIMITE_53118) return LIMITE_53118;
    return valor * FACTOR_53118;
}
