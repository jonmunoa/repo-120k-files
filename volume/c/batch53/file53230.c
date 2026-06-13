// fichero 53230 -- macros y constantes
#define LIMITE_53230 53330
#define FACTOR_53230 1

int aplicar_limite53230(int valor) {
    if (valor > LIMITE_53230) return LIMITE_53230;
    return valor * FACTOR_53230;
}
