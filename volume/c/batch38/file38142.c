// fichero 38142 -- macros y constantes -- MODIFICADO
#define LIMITE_38142 38342
#define FACTOR_38142 4

int aplicar_limite38142(int valor) {
    if (valor > LIMITE_38142) return LIMITE_38142;
    return valor * FACTOR_38142;
}
