// fichero 46826 -- macros y constantes -- MODIFICADO
#define LIMITE_46826 47026
#define FACTOR_46826 3

int aplicar_limite46826(int valor) {
    if (valor > LIMITE_46826) return LIMITE_46826;
    return valor * FACTOR_46826;
}
