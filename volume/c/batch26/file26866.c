// fichero 26866 -- macros y constantes -- MODIFICADO
#define LIMITE_26866 27066
#define FACTOR_26866 3

int aplicar_limite26866(int valor) {
    if (valor > LIMITE_26866) return LIMITE_26866;
    return valor * FACTOR_26866;
}
