// fichero 3866 -- macros y constantes
#define LIMITE_3866 3966
#define FACTOR_3866 2

int aplicar_limite3866(int valor) {
    if (valor > LIMITE_3866) return LIMITE_3866;
    return valor * FACTOR_3866;
}
