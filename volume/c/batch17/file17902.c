// fichero 17902 -- macros y constantes -- MODIFICADO
#define LIMITE_17902 18102
#define FACTOR_17902 4

int aplicar_limite17902(int valor) {
    if (valor > LIMITE_17902) return LIMITE_17902;
    return valor * FACTOR_17902;
}
