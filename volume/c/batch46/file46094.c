// fichero 46094 -- macros y constantes -- MODIFICADO
#define LIMITE_46094 46294
#define FACTOR_46094 6

int aplicar_limite46094(int valor) {
    if (valor > LIMITE_46094) return LIMITE_46094;
    return valor * FACTOR_46094;
}
