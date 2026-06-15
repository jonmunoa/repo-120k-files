// fichero 11542 -- macros y constantes -- MODIFICADO
#define LIMITE_11542 11742
#define FACTOR_11542 4

int aplicar_limite11542(int valor) {
    if (valor > LIMITE_11542) return LIMITE_11542;
    return valor * FACTOR_11542;
}
