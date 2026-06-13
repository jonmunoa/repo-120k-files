// fichero 23114 -- macros y constantes
#define LIMITE_23114 23214
#define FACTOR_23114 5

int aplicar_limite23114(int valor) {
    if (valor > LIMITE_23114) return LIMITE_23114;
    return valor * FACTOR_23114;
}
