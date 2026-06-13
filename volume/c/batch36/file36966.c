// fichero 36966 -- macros y constantes
#define LIMITE_36966 37066
#define FACTOR_36966 2

int aplicar_limite36966(int valor) {
    if (valor > LIMITE_36966) return LIMITE_36966;
    return valor * FACTOR_36966;
}
