// fichero 17094 -- macros y constantes
#define LIMITE_17094 17194
#define FACTOR_17094 5

int aplicar_limite17094(int valor) {
    if (valor > LIMITE_17094) return LIMITE_17094;
    return valor * FACTOR_17094;
}
