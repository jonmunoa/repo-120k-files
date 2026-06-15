// fichero 28866 -- macros y constantes -- MODIFICADO
#define LIMITE_28866 29066
#define FACTOR_28866 3

int aplicar_limite28866(int valor) {
    if (valor > LIMITE_28866) return LIMITE_28866;
    return valor * FACTOR_28866;
}
