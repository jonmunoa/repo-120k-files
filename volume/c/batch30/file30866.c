// fichero 30866 -- macros y constantes
#define LIMITE_30866 30966
#define FACTOR_30866 2

int aplicar_limite30866(int valor) {
    if (valor > LIMITE_30866) return LIMITE_30866;
    return valor * FACTOR_30866;
}
