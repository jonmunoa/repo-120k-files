// fichero 32494 -- macros y constantes
#define LIMITE_32494 32594
#define FACTOR_32494 5

int aplicar_limite32494(int valor) {
    if (valor > LIMITE_32494) return LIMITE_32494;
    return valor * FACTOR_32494;
}
