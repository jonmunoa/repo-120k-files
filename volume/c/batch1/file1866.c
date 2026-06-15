// fichero 1866 -- macros y constantes -- MODIFICADO
#define LIMITE_1866 2066
#define FACTOR_1866 3

int aplicar_limite1866(int valor) {
    if (valor > LIMITE_1866) return LIMITE_1866;
    return valor * FACTOR_1866;
}
