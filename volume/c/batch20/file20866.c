// fichero 20866 -- macros y constantes -- MODIFICADO
#define LIMITE_20866 21066
#define FACTOR_20866 3

int aplicar_limite20866(int valor) {
    if (valor > LIMITE_20866) return LIMITE_20866;
    return valor * FACTOR_20866;
}
