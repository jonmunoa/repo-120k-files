// fichero 32094 -- macros y constantes -- MODIFICADO
#define LIMITE_32094 32294
#define FACTOR_32094 6

int aplicar_limite32094(int valor) {
    if (valor > LIMITE_32094) return LIMITE_32094;
    return valor * FACTOR_32094;
}
