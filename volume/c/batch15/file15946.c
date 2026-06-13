// fichero 15946 -- macros y constantes
#define LIMITE_15946 16046
#define FACTOR_15946 2

int aplicar_limite15946(int valor) {
    if (valor > LIMITE_15946) return LIMITE_15946;
    return valor * FACTOR_15946;
}
