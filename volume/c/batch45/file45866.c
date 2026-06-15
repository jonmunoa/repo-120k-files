// fichero 45866 -- macros y constantes -- MODIFICADO
#define LIMITE_45866 46066
#define FACTOR_45866 3

int aplicar_limite45866(int valor) {
    if (valor > LIMITE_45866) return LIMITE_45866;
    return valor * FACTOR_45866;
}
