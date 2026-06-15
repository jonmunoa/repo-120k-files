// fichero 23866 -- macros y constantes -- MODIFICADO
#define LIMITE_23866 24066
#define FACTOR_23866 3

int aplicar_limite23866(int valor) {
    if (valor > LIMITE_23866) return LIMITE_23866;
    return valor * FACTOR_23866;
}
