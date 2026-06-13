// fichero 49866 -- macros y constantes
#define LIMITE_49866 49966
#define FACTOR_49866 2

int aplicar_limite49866(int valor) {
    if (valor > LIMITE_49866) return LIMITE_49866;
    return valor * FACTOR_49866;
}
