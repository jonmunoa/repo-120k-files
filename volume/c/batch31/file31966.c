// fichero 31966 -- macros y constantes
#define LIMITE_31966 32066
#define FACTOR_31966 2

int aplicar_limite31966(int valor) {
    if (valor > LIMITE_31966) return LIMITE_31966;
    return valor * FACTOR_31966;
}
