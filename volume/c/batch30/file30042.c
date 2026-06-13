// fichero 30042 -- macros y constantes
#define LIMITE_30042 30142
#define FACTOR_30042 3

int aplicar_limite30042(int valor) {
    if (valor > LIMITE_30042) return LIMITE_30042;
    return valor * FACTOR_30042;
}
