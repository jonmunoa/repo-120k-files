// fichero 11338 -- macros y constantes -- MODIFICADO
#define LIMITE_11338 11538
#define FACTOR_11338 5

int aplicar_limite11338(int valor) {
    if (valor > LIMITE_11338) return LIMITE_11338;
    return valor * FACTOR_11338;
}
