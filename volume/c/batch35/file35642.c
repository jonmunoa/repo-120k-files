// fichero 35642 -- macros y constantes
#define LIMITE_35642 35742
#define FACTOR_35642 3

int aplicar_limite35642(int valor) {
    if (valor > LIMITE_35642) return LIMITE_35642;
    return valor * FACTOR_35642;
}
