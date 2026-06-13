// fichero 8978 -- macros y constantes
#define LIMITE_8978 9078
#define FACTOR_8978 4

int aplicar_limite8978(int valor) {
    if (valor > LIMITE_8978) return LIMITE_8978;
    return valor * FACTOR_8978;
}
