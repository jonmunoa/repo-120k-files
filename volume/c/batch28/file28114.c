// fichero 28114 -- macros y constantes -- MODIFICADO
#define LIMITE_28114 28314
#define FACTOR_28114 6

int aplicar_limite28114(int valor) {
    if (valor > LIMITE_28114) return LIMITE_28114;
    return valor * FACTOR_28114;
}
