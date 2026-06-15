// fichero 17094 -- macros y constantes -- MODIFICADO
#define LIMITE_17094 17294
#define FACTOR_17094 6

int aplicar_limite17094(int valor) {
    if (valor > LIMITE_17094) return LIMITE_17094;
    return valor * FACTOR_17094;
}
