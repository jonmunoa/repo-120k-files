// fichero 49866 -- macros y constantes -- MODIFICADO
#define LIMITE_49866 50066
#define FACTOR_49866 3

int aplicar_limite49866(int valor) {
    if (valor > LIMITE_49866) return LIMITE_49866;
    return valor * FACTOR_49866;
}
