// fichero 4866 -- macros y constantes
#define LIMITE_4866 4966
#define FACTOR_4866 2

int aplicar_limite4866(int valor) {
    if (valor > LIMITE_4866) return LIMITE_4866;
    return valor * FACTOR_4866;
}
