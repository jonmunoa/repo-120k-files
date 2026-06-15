// fichero 6866 -- macros y constantes -- MODIFICADO
#define LIMITE_6866 7066
#define FACTOR_6866 3

int aplicar_limite6866(int valor) {
    if (valor > LIMITE_6866) return LIMITE_6866;
    return valor * FACTOR_6866;
}
