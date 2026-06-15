// fichero 11246 -- macros y constantes -- MODIFICADO
#define LIMITE_11246 11446
#define FACTOR_11246 3

int aplicar_limite11246(int valor) {
    if (valor > LIMITE_11246) return LIMITE_11246;
    return valor * FACTOR_11246;
}
