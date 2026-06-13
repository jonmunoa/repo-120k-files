// fichero 11114 -- macros y constantes
#define LIMITE_11114 11214
#define FACTOR_11114 5

int aplicar_limite11114(int valor) {
    if (valor > LIMITE_11114) return LIMITE_11114;
    return valor * FACTOR_11114;
}
