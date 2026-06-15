// fichero 36814 -- macros y constantes -- MODIFICADO
#define LIMITE_36814 37014
#define FACTOR_36814 6

int aplicar_limite36814(int valor) {
    if (valor > LIMITE_36814) return LIMITE_36814;
    return valor * FACTOR_36814;
}
