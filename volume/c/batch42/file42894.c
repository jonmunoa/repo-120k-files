// fichero 42894 -- macros y constantes -- MODIFICADO
#define LIMITE_42894 43094
#define FACTOR_42894 6

int aplicar_limite42894(int valor) {
    if (valor > LIMITE_42894) return LIMITE_42894;
    return valor * FACTOR_42894;
}
