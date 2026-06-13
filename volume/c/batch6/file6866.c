// fichero 6866 -- macros y constantes
#define LIMITE_6866 6966
#define FACTOR_6866 2

int aplicar_limite6866(int valor) {
    if (valor > LIMITE_6866) return LIMITE_6866;
    return valor * FACTOR_6866;
}
