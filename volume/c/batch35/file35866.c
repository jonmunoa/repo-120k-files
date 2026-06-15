// fichero 35866 -- macros y constantes -- MODIFICADO
#define LIMITE_35866 36066
#define FACTOR_35866 3

int aplicar_limite35866(int valor) {
    if (valor > LIMITE_35866) return LIMITE_35866;
    return valor * FACTOR_35866;
}
