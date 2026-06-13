// fichero 15866 -- macros y constantes
#define LIMITE_15866 15966
#define FACTOR_15866 2

int aplicar_limite15866(int valor) {
    if (valor > LIMITE_15866) return LIMITE_15866;
    return valor * FACTOR_15866;
}
