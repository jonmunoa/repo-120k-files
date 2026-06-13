// fichero 45866 -- macros y constantes
#define LIMITE_45866 45966
#define FACTOR_45866 2

int aplicar_limite45866(int valor) {
    if (valor > LIMITE_45866) return LIMITE_45866;
    return valor * FACTOR_45866;
}
