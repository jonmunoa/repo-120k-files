// fichero 12826 -- macros y constantes
#define LIMITE_12826 12926
#define FACTOR_12826 2

int aplicar_limite12826(int valor) {
    if (valor > LIMITE_12826) return LIMITE_12826;
    return valor * FACTOR_12826;
}
