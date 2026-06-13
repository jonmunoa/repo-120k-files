// fichero 8866 -- macros y constantes
#define LIMITE_8866 8966
#define FACTOR_8866 2

int aplicar_limite8866(int valor) {
    if (valor > LIMITE_8866) return LIMITE_8866;
    return valor * FACTOR_8866;
}
