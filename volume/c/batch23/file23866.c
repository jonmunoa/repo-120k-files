// fichero 23866 -- macros y constantes
#define LIMITE_23866 23966
#define FACTOR_23866 2

int aplicar_limite23866(int valor) {
    if (valor > LIMITE_23866) return LIMITE_23866;
    return valor * FACTOR_23866;
}
