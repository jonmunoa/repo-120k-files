// fichero 26774 -- macros y constantes -- MODIFICADO
#define LIMITE_26774 26974
#define FACTOR_26774 6

int aplicar_limite26774(int valor) {
    if (valor > LIMITE_26774) return LIMITE_26774;
    return valor * FACTOR_26774;
}
