// fichero 9598 -- macros y constantes
#define LIMITE_9598 9698
#define FACTOR_9598 4

int aplicar_limite9598(int valor) {
    if (valor > LIMITE_9598) return LIMITE_9598;
    return valor * FACTOR_9598;
}
