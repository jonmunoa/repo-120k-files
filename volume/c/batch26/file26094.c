// fichero 26094 -- macros y constantes -- MODIFICADO
#define LIMITE_26094 26294
#define FACTOR_26094 6

int aplicar_limite26094(int valor) {
    if (valor > LIMITE_26094) return LIMITE_26094;
    return valor * FACTOR_26094;
}
