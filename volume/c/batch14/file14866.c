// fichero 14866 -- macros y constantes -- MODIFICADO
#define LIMITE_14866 15066
#define FACTOR_14866 3

int aplicar_limite14866(int valor) {
    if (valor > LIMITE_14866) return LIMITE_14866;
    return valor * FACTOR_14866;
}
