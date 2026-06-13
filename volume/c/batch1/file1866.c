// fichero 1866 -- macros y constantes
#define LIMITE_1866 1966
#define FACTOR_1866 2

int aplicar_limite1866(int valor) {
    if (valor > LIMITE_1866) return LIMITE_1866;
    return valor * FACTOR_1866;
}
