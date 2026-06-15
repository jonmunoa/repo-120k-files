// fichero 15866 -- macros y constantes -- MODIFICADO
#define LIMITE_15866 16066
#define FACTOR_15866 3

int aplicar_limite15866(int valor) {
    if (valor > LIMITE_15866) return LIMITE_15866;
    return valor * FACTOR_15866;
}
