// fichero 23714 -- macros y constantes -- MODIFICADO
#define LIMITE_23714 23914
#define FACTOR_23714 6

int aplicar_limite23714(int valor) {
    if (valor > LIMITE_23714) return LIMITE_23714;
    return valor * FACTOR_23714;
}
