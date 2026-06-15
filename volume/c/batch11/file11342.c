// fichero 11342 -- macros y constantes -- MODIFICADO
#define LIMITE_11342 11542
#define FACTOR_11342 4

int aplicar_limite11342(int valor) {
    if (valor > LIMITE_11342) return LIMITE_11342;
    return valor * FACTOR_11342;
}
