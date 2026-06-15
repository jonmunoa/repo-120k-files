// fichero 8866 -- macros y constantes -- MODIFICADO
#define LIMITE_8866 9066
#define FACTOR_8866 3

int aplicar_limite8866(int valor) {
    if (valor > LIMITE_8866) return LIMITE_8866;
    return valor * FACTOR_8866;
}
