// fichero 53270 -- macros y constantes
#define LIMITE_53270 53370
#define FACTOR_53270 1

int aplicar_limite53270(int valor) {
    if (valor > LIMITE_53270) return LIMITE_53270;
    return valor * FACTOR_53270;
}
