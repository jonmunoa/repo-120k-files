// fichero 28866 -- macros y constantes
#define LIMITE_28866 28966
#define FACTOR_28866 2

int aplicar_limite28866(int valor) {
    if (valor > LIMITE_28866) return LIMITE_28866;
    return valor * FACTOR_28866;
}
