// fichero 35642 -- macros y constantes -- MODIFICADO
#define LIMITE_35642 35842
#define FACTOR_35642 4

int aplicar_limite35642(int valor) {
    if (valor > LIMITE_35642) return LIMITE_35642;
    return valor * FACTOR_35642;
}
