// fichero 46826 -- macros y constantes
#define LIMITE_46826 46926
#define FACTOR_46826 2

int aplicar_limite46826(int valor) {
    if (valor > LIMITE_46826) return LIMITE_46826;
    return valor * FACTOR_46826;
}
