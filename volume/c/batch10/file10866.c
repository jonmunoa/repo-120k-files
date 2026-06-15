// fichero 10866 -- macros y constantes -- MODIFICADO
#define LIMITE_10866 11066
#define FACTOR_10866 3

int aplicar_limite10866(int valor) {
    if (valor > LIMITE_10866) return LIMITE_10866;
    return valor * FACTOR_10866;
}
