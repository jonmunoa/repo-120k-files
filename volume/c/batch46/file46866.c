// fichero 46866 -- macros y constantes
#define LIMITE_46866 46966
#define FACTOR_46866 2

int aplicar_limite46866(int valor) {
    if (valor > LIMITE_46866) return LIMITE_46866;
    return valor * FACTOR_46866;
}
