// fichero 2866 -- macros y constantes -- MODIFICADO
#define LIMITE_2866 3066
#define FACTOR_2866 3

int aplicar_limite2866(int valor) {
    if (valor > LIMITE_2866) return LIMITE_2866;
    return valor * FACTOR_2866;
}
