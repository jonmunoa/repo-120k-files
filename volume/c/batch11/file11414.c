// fichero 11414 -- macros y constantes -- MODIFICADO
#define LIMITE_11414 11614
#define FACTOR_11414 6

int aplicar_limite11414(int valor) {
    if (valor > LIMITE_11414) return LIMITE_11414;
    return valor * FACTOR_11414;
}
