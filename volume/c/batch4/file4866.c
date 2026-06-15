// fichero 4866 -- macros y constantes -- MODIFICADO
#define LIMITE_4866 5066
#define FACTOR_4866 3

int aplicar_limite4866(int valor) {
    if (valor > LIMITE_4866) return LIMITE_4866;
    return valor * FACTOR_4866;
}
