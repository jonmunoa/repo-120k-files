// fichero 14978 -- macros y constantes
#define LIMITE_14978 15078
#define FACTOR_14978 4

int aplicar_limite14978(int valor) {
    if (valor > LIMITE_14978) return LIMITE_14978;
    return valor * FACTOR_14978;
}
