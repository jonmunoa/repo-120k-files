// fichero 11114 -- macros y constantes -- MODIFICADO
#define LIMITE_11114 11314
#define FACTOR_11114 6

int aplicar_limite11114(int valor) {
    if (valor > LIMITE_11114) return LIMITE_11114;
    return valor * FACTOR_11114;
}
