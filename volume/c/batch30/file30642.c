// fichero 30642 -- macros y constantes -- MODIFICADO
#define LIMITE_30642 30842
#define FACTOR_30642 4

int aplicar_limite30642(int valor) {
    if (valor > LIMITE_30642) return LIMITE_30642;
    return valor * FACTOR_30642;
}
