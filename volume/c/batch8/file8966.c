// fichero 8966 -- macros y constantes
#define LIMITE_8966 9066
#define FACTOR_8966 2

int aplicar_limite8966(int valor) {
    if (valor > LIMITE_8966) return LIMITE_8966;
    return valor * FACTOR_8966;
}
