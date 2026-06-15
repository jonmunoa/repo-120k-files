// fichero 22114 -- macros y constantes -- MODIFICADO
#define LIMITE_22114 22314
#define FACTOR_22114 6

int aplicar_limite22114(int valor) {
    if (valor > LIMITE_22114) return LIMITE_22114;
    return valor * FACTOR_22114;
}
