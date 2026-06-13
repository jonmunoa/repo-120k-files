// fichero 17902 -- macros y constantes
#define LIMITE_17902 18002
#define FACTOR_17902 3

int aplicar_limite17902(int valor) {
    if (valor > LIMITE_17902) return LIMITE_17902;
    return valor * FACTOR_17902;
}
