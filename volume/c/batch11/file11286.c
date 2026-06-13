// fichero 11286 -- macros y constantes
#define LIMITE_11286 11386
#define FACTOR_11286 2

int aplicar_limite11286(int valor) {
    if (valor > LIMITE_11286) return LIMITE_11286;
    return valor * FACTOR_11286;
}
