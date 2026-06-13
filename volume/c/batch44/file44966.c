// fichero 44966 -- macros y constantes
#define LIMITE_44966 45066
#define FACTOR_44966 2

int aplicar_limite44966(int valor) {
    if (valor > LIMITE_44966) return LIMITE_44966;
    return valor * FACTOR_44966;
}
