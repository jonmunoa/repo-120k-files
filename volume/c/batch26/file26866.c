// fichero 26866 -- macros y constantes
#define LIMITE_26866 26966
#define FACTOR_26866 2

int aplicar_limite26866(int valor) {
    if (valor > LIMITE_26866) return LIMITE_26866;
    return valor * FACTOR_26866;
}
