// fichero 41866 -- macros y constantes -- MODIFICADO
#define LIMITE_41866 42066
#define FACTOR_41866 3

int aplicar_limite41866(int valor) {
    if (valor > LIMITE_41866) return LIMITE_41866;
    return valor * FACTOR_41866;
}
