// fichero 7866 -- macros y constantes -- MODIFICADO
#define LIMITE_7866 8066
#define FACTOR_7866 3

int aplicar_limite7866(int valor) {
    if (valor > LIMITE_7866) return LIMITE_7866;
    return valor * FACTOR_7866;
}
