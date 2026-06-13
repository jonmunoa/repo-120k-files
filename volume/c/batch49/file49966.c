// fichero 49966 -- macros y constantes
#define LIMITE_49966 50066
#define FACTOR_49966 2

int aplicar_limite49966(int valor) {
    if (valor > LIMITE_49966) return LIMITE_49966;
    return valor * FACTOR_49966;
}
