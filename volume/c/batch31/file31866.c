// fichero 31866 -- macros y constantes -- MODIFICADO
#define LIMITE_31866 32066
#define FACTOR_31866 3

int aplicar_limite31866(int valor) {
    if (valor > LIMITE_31866) return LIMITE_31866;
    return valor * FACTOR_31866;
}
