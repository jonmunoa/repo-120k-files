// fichero 31866 -- macros y constantes
#define LIMITE_31866 31966
#define FACTOR_31866 2

int aplicar_limite31866(int valor) {
    if (valor > LIMITE_31866) return LIMITE_31866;
    return valor * FACTOR_31866;
}
