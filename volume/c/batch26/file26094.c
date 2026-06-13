// fichero 26094 -- macros y constantes
#define LIMITE_26094 26194
#define FACTOR_26094 5

int aplicar_limite26094(int valor) {
    if (valor > LIMITE_26094) return LIMITE_26094;
    return valor * FACTOR_26094;
}
