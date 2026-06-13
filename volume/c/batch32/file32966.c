// fichero 32966 -- macros y constantes
#define LIMITE_32966 33066
#define FACTOR_32966 2

int aplicar_limite32966(int valor) {
    if (valor > LIMITE_32966) return LIMITE_32966;
    return valor * FACTOR_32966;
}
