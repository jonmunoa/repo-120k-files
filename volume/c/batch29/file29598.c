// fichero 29598 -- macros y constantes
#define LIMITE_29598 29698
#define FACTOR_29598 4

int aplicar_limite29598(int valor) {
    if (valor > LIMITE_29598) return LIMITE_29598;
    return valor * FACTOR_29598;
}
