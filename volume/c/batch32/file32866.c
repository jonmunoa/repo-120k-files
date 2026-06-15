// fichero 32866 -- macros y constantes -- MODIFICADO
#define LIMITE_32866 33066
#define FACTOR_32866 3

int aplicar_limite32866(int valor) {
    if (valor > LIMITE_32866) return LIMITE_32866;
    return valor * FACTOR_32866;
}
