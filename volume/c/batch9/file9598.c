// fichero 9598 -- macros y constantes -- MODIFICADO
#define LIMITE_9598 9798
#define FACTOR_9598 5

int aplicar_limite9598(int valor) {
    if (valor > LIMITE_9598) return LIMITE_9598;
    return valor * FACTOR_9598;
}
