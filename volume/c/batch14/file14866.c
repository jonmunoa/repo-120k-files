// fichero 14866 -- macros y constantes
#define LIMITE_14866 14966
#define FACTOR_14866 2

int aplicar_limite14866(int valor) {
    if (valor > LIMITE_14866) return LIMITE_14866;
    return valor * FACTOR_14866;
}
