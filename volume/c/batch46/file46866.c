// fichero 46866 -- macros y constantes -- MODIFICADO
#define LIMITE_46866 47066
#define FACTOR_46866 3

int aplicar_limite46866(int valor) {
    if (valor > LIMITE_46866) return LIMITE_46866;
    return valor * FACTOR_46866;
}
