// fichero 10866 -- macros y constantes
#define LIMITE_10866 10966
#define FACTOR_10866 2

int aplicar_limite10866(int valor) {
    if (valor > LIMITE_10866) return LIMITE_10866;
    return valor * FACTOR_10866;
}
