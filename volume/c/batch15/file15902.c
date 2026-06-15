// fichero 15902 -- macros y constantes -- MODIFICADO
#define LIMITE_15902 16102
#define FACTOR_15902 4

int aplicar_limite15902(int valor) {
    if (valor > LIMITE_15902) return LIMITE_15902;
    return valor * FACTOR_15902;
}
