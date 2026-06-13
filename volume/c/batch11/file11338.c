// fichero 11338 -- macros y constantes
#define LIMITE_11338 11438
#define FACTOR_11338 4

int aplicar_limite11338(int valor) {
    if (valor > LIMITE_11338) return LIMITE_11338;
    return valor * FACTOR_11338;
}
