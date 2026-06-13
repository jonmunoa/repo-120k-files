// fichero 7866 -- macros y constantes
#define LIMITE_7866 7966
#define FACTOR_7866 2

int aplicar_limite7866(int valor) {
    if (valor > LIMITE_7866) return LIMITE_7866;
    return valor * FACTOR_7866;
}
