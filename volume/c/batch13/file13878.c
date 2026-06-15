// fichero 13878 -- macros y constantes -- MODIFICADO
#define LIMITE_13878 14078
#define FACTOR_13878 5

int aplicar_limite13878(int valor) {
    if (valor > LIMITE_13878) return LIMITE_13878;
    return valor * FACTOR_13878;
}
