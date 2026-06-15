// fichero 30866 -- macros y constantes -- MODIFICADO
#define LIMITE_30866 31066
#define FACTOR_30866 3

int aplicar_limite30866(int valor) {
    if (valor > LIMITE_30866) return LIMITE_30866;
    return valor * FACTOR_30866;
}
