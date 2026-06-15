// fichero 8142 -- macros y constantes -- MODIFICADO
#define LIMITE_8142 8342
#define FACTOR_8142 4

int aplicar_limite8142(int valor) {
    if (valor > LIMITE_8142) return LIMITE_8142;
    return valor * FACTOR_8142;
}
