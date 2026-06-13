// fichero 11414 -- macros y constantes
#define LIMITE_11414 11514
#define FACTOR_11414 5

int aplicar_limite11414(int valor) {
    if (valor > LIMITE_11414) return LIMITE_11414;
    return valor * FACTOR_11414;
}
