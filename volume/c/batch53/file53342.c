// fichero 53342 -- macros y constantes
#define LIMITE_53342 53442
#define FACTOR_53342 3

int aplicar_limite53342(int valor) {
    if (valor > LIMITE_53342) return LIMITE_53342;
    return valor * FACTOR_53342;
}
