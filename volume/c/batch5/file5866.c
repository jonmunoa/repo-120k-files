// fichero 5866 -- macros y constantes
#define LIMITE_5866 5966
#define FACTOR_5866 2

int aplicar_limite5866(int valor) {
    if (valor > LIMITE_5866) return LIMITE_5866;
    return valor * FACTOR_5866;
}
